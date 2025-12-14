/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90804
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
    var_13 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0)))))) : (var_2))) > (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_5)))) > (((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) / (arr_0 [(_Bool)1] [i_1 + 1])))) ? (((((/* implicit */_Bool) 2300976677U)) ? (((/* implicit */int) (signed char)-20)) : (((((/* implicit */int) (signed char)17)) >> (((/* implicit */int) (signed char)20)))))) : (((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))))));
                    arr_8 [13ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7695347360193453746LL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)13))));
                    var_14 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned short)52262)) : (((/* implicit */int) (short)-141))))) ? (arr_5 [(unsigned char)19] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2])))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] |= (((~(14030223633051442382ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_13 [i_3] [i_3]) ? (((/* implicit */int) arr_13 [12ULL] [i_3])) : (((/* implicit */int) arr_10 [i_3]))))) ? (((/* implicit */int) ((unsigned short) arr_13 [19ULL] [(unsigned short)9]))) : (((/* implicit */int) arr_13 [i_3] [i_3])))) * (((/* implicit */int) ((arr_11 [i_3]) != (arr_11 [i_3]))))));
        var_15 = ((/* implicit */unsigned long long int) (+(((arr_13 [i_3] [i_3]) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3]))))));
    }
}
