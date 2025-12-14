/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96513
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */short) arr_1 [i_0 + 4]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_5 [i_0 + 1] [i_1 - 2] [i_0 + 1]))));
                        var_15 = (+((-(((((/* implicit */unsigned long long int) -7)) / (arr_0 [i_2]))))));
                        arr_12 [i_1] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) -7)))));
                    }
                    var_16 = ((min((max((((/* implicit */unsigned long long int) 6)), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_8 [i_0 + 2] [18LL] [i_0]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_1] [i_0]), (((/* implicit */short) var_11))))))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -281492759)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6182)))));
        var_18 = ((/* implicit */_Bool) ((min((arr_1 [i_4]), (arr_1 [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16888498602639360ULL))))) : ((+(((/* implicit */int) var_11))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4] [i_4])) >> (((/* implicit */int) arr_13 [i_4] [i_4]))))) / (max((((/* implicit */long long int) arr_13 [i_4] [i_4])), (var_4)))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_3)))) + (2147483647))) >> (((((((/* implicit */int) (_Bool)1)) ^ (-1197569267))) + (1197569282)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [16LL] [i_4] [i_4]) ? (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_4] [i_4]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [8] [8] [8])) : (arr_4 [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6)) ? (((/* implicit */int) arr_9 [4LL] [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4]))))) : (11743833630836552025ULL))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_5])), (-1197569267))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3687374957U)) ? (-1197569261) : ((-(((/* implicit */int) ((signed char) (unsigned char)154)))))));
        var_23 = 11ULL;
        var_24 = ((/* implicit */long long int) min((14735316412061136492ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
    {
        arr_21 [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6])) ? (607592336U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((-202028795) / (var_0))))))));
        var_25 = ((/* implicit */_Bool) (((+(1197569267))) / (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)141))))) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_10))))));
        arr_22 [i_6] [i_6] = max((((arr_13 [i_6] [i_6]) ? (-1662761375) : (((/* implicit */int) arr_10 [i_6])))), (((int) (short)63)));
    }
    var_26 = ((/* implicit */unsigned char) max((var_26), (var_10)));
    /* LoopSeq 2 */
    for (int i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_8 = 3; i_8 < 11; i_8 += 2) 
        {
            arr_28 [i_7] = ((/* implicit */unsigned int) var_8);
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 8188735335663204651LL)))))));
            var_28 = ((/* implicit */unsigned char) max(((+(14))), (((arr_8 [i_8 - 1] [i_8] [i_7 + 1]) ? (((/* implicit */int) arr_8 [i_8 + 1] [i_8 + 1] [i_7 + 2])) : (((/* implicit */int) arr_8 [i_8 + 1] [16LL] [i_7 - 1]))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) var_4);
            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (((~(arr_0 [i_9]))) + (arr_11 [i_7] [i_7 - 1] [i_7])));
        }
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) (((+(((/* implicit */int) max(((unsigned short)28246), ((unsigned short)8440)))))) - (((int) max((var_6), (((/* implicit */unsigned long long int) var_3)))))));
            var_31 = ((/* implicit */unsigned int) var_2);
            var_32 = ((/* implicit */_Bool) ((arr_15 [i_7]) ? (((/* implicit */int) arr_29 [i_7] [i_7] [i_10])) : (((arr_8 [i_7] [i_7 + 2] [i_7 + 2]) ? (((/* implicit */int) arr_8 [i_7] [i_10] [i_7 + 1])) : (var_0)))));
        }
        arr_36 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1662761375)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30535))) : (15408765505265583694ULL)));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((_Bool) arr_37 [i_11])) || (((/* implicit */_Bool) ((arr_6 [i_11]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
    }
    var_35 = ((/* implicit */short) max((var_9), (var_11)));
    var_36 *= ((/* implicit */_Bool) min(((~(((var_1) << (((((/* implicit */int) var_12)) - (2978))))))), ((-(var_6)))));
}
