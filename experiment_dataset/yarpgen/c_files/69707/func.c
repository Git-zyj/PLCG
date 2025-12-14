/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69707
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)50)))))), (min((min((((/* implicit */long long int) (unsigned char)0)), (var_3))), (min((-2863696773957939077LL), (var_3))))));
        arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_3))))) ? (min((((((/* implicit */unsigned long long int) 8915692884208154079LL)) ^ (6528976005783017721ULL))), (var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)32)), (var_2)))));
        var_12 ^= ((((/* implicit */_Bool) max((var_3), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (max((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) var_10)) : (var_4))), (((/* implicit */unsigned long long int) var_9)))));
        arr_6 [i_0] = 18194866722542777796ULL;
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((var_8) > (((/* implicit */unsigned long long int) var_10))));
        arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) & (-1647610563312060640LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((554153860399104LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)8), ((unsigned char)255))))) ^ (((((/* implicit */_Bool) (unsigned char)124)) ? (2074511476969751727ULL) : (12714576511362353668ULL))))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)204)), (16372232596739799895ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)172)), (17502456854044289833ULL)))))))) == (((((/* implicit */_Bool) ((unsigned long long int) 5732167562347197937ULL))) ? (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) : (-3953105157073017793LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) max(((unsigned char)199), (var_7))))))) ? (max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) -7258549233698807226LL)) : (17302897201743816009ULL))), (min((var_8), (16622076160402213555ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)47), ((unsigned char)4)))))));
        var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_7)) ? (min((10ULL), (((/* implicit */unsigned long long int) -7938245172205950197LL)))) : (((/* implicit */unsigned long long int) min((-1299822880696259838LL), (((/* implicit */long long int) var_0))))))), (((((/* implicit */_Bool) -6520088167009078590LL)) ? (16463669026611610117ULL) : (var_8)))));
    }
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((((/* implicit */_Bool) var_8)) ? (min((5732167562347197937ULL), (((/* implicit */unsigned long long int) 274877906944LL)))) : (min((6762009898072386436ULL), (((/* implicit */unsigned long long int) -1615260053494107128LL)))))), (((/* implicit */unsigned long long int) (~(var_9))))))));
    var_18 = ((/* implicit */unsigned char) (-(var_8)));
}
