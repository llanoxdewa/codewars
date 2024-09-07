# import os,random,re
import random

def test(func):
    def wrap(*arg):
        return [*arg,func(*arg)] 
    return wrap

#--------------------------------------SOLUTION--------------------------------------------------#
# @test
# def word_mesh(words):
    # mesh = ''
    # N = len(words)

    # for i in range(N - 1):
        # # n = len(words[i])
        # x = words[i][-1]
        # same = ''
        # j = 0
        # nsx = 1
        # while words[i][-(nsx + 1)] == x:
            # nsx += 1       
        # ifx = words[i + 1].index(x) + (nsx - 1)
        # if words[i + 1][ifx] != x and ifx >= len(words[i + 1]):
            # return 'failed to mesh'

        # while ifx - j >= 0:
            # same += words[i + 1][ifx - j]
            # if words[i][-(j + 1)] != words[i + 1][ifx - j]:
                # same = ''
                # break
            # j += 1
        # if same == '':
            # return "failed to mesh"
        # mesh += same[::-1]

    # return mesh 

@test
def word_mesh(words):
    mesh = '' 
    N = len(words)

    for i in range(N - 1):
        same = '' 
        n = len(words[i])
        for j in range(n):
            if words[i][j:] == words[i + 1][0:(n - j)]:
                same = words[i][j:]
                break
        if not same:
            return 'failed to mesh'
        mesh += same
    return mesh 

hasil = [] 
def cek(ans,rans,*trash):
    hasil.append((ans[-1],rans,ans[:-1]))
    
#--------------------------------------cekING---------------------------------------------------# 
cek(word_mesh(["beacon", "condominium", "umbilical", "california"]), "conumcal")
cek(word_mesh(["allow", "lowering", "ringmaster", "terror"]), "lowringter")
cek(word_mesh(["abandon", "donation", "onion", "ongoing"]), "dononon")
cek(word_mesh(["jamestown", "ownership", "hippocampus", "pushcart", "cartographer", "pheromone"]), "ownhippuscartpher")
cek(word_mesh(['victoria', 'iambic', 'icicle', 'clearview', 'rearviewpoint',
    'ointment', 'entrance']),'failed to mesh')

#ceking code
i = 1 
gagal = 0
for a,v,args in hasil:
    if a==v:
        print(f'case#{i} solved')
    else:
        gagal += 1
        print(f'case#{i} failed')
        print(f'\targs: {args}')
        print(f'\tresult--> {a}')
        print(f'\tshould equal--> {v}')
    i += 1
print("----------------------------------")
print(f"{gagal} / {len(hasil)} cek gagal")








