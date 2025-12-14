/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86655
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
    var_13 = (+(max((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned int) arr_3 [i_2])) : ((-(1323066259U)))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [4] [i_1 - 1])) : (((/* implicit */int) (!(arr_8 [i_0 + 2] [i_1] [i_2] [i_0] [i_2])))))))));
                        arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) + (arr_1 [i_0] [i_2])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_13 [i_0] [11U] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_3 [i_0]))) ? ((+((+(522696933U))))) : ((((_Bool)0) ? (675861510U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_2] [i_4]))))))));
                        var_16 += ((/* implicit */_Bool) 2147483647);
                    }
                    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (-1266021329))))));
                        arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1148940953), (2147483631)))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_5 - 1])))) : (((((/* implicit */_Bool) 1120605016)) ? (((/* implicit */int) (_Bool)1)) : (-456624418)))))) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_0] [i_2 - 1])) : (((/* implicit */int) (_Bool)1))));
                        var_18 += ((/* implicit */_Bool) ((-1109527894) + (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)42))))) ? (((((/* implicit */int) arr_6 [i_1] [(_Bool)1] [i_2] [i_5])) % (arr_3 [i_5]))) : (((/* implicit */int) max((arr_9 [i_2] [i_1] [i_2 - 1] [i_2]), ((_Bool)1))))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((int) ((((/* implicit */_Bool) max((849481266U), (((/* implicit */unsigned int) arr_12 [i_6] [i_0] [i_0]))))) ? (((unsigned long long int) arr_9 [i_1] [i_2] [(_Bool)1] [(_Bool)1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */int) arr_18 [i_1] [i_6 - 2] [i_2 - 2] [i_1 + 2] [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_11 [i_2] [i_6])) : (((/* implicit */int) arr_11 [i_1] [i_1])))) : (((arr_18 [i_1] [i_1 + 1] [i_2 - 1] [i_6 - 1] [i_1 - 2]) ? (1589518795) : (((/* implicit */int) arr_18 [i_6] [i_1 + 4] [i_2 - 2] [i_6 - 2] [i_7]))))));
                        }
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [3] [i_2] [i_6 - 1] [i_8] = ((/* implicit */signed char) ((arr_3 [i_0]) ^ (((arr_22 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_6]) ? (arr_0 [i_0]) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_2 - 1] [i_2] [i_0] [i_0]))))));
                            var_21 = ((/* implicit */signed char) (_Bool)1);
                            arr_26 [i_0] [i_0] [i_2] [i_2] [i_8] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6 - 2] [i_8])) ? (3231798974U) : (3867214137U))))))));
                        }
                        arr_27 [i_1] [i_1] &= (-(((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) < (arr_1 [i_6] [i_1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_30 [i_0 - 1] [i_0] [(_Bool)1] [i_1] [i_2] [i_6] [i_9]) : (arr_3 [i_2])))) ? (4887809346051504985ULL) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_6]))));
                            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 271117845U)) ? (2516358003U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1120605016)) ? (134217727) : (((/* implicit */int) (_Bool)0)))))));
                            var_24 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (arr_1 [i_6] [i_2]));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1)))) ? ((~(arr_19 [i_0] [i_1]))) : (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1])))))) : (((arr_9 [i_2] [i_1] [i_2] [i_10]) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_10])), (arr_30 [i_0] [(_Bool)1] [i_2] [i_0 + 2] [i_1] [i_0] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_10] [i_2] [i_10])) ? (((/* implicit */unsigned long long int) arr_5 [i_2])) : (arr_24 [i_0] [i_0] [i_2] [i_0] [i_0]))))))))));
                        arr_33 [i_0 - 1] [i_0] [(_Bool)1] [i_10] = ((unsigned int) ((arr_32 [i_0]) ? (((/* implicit */int) arr_32 [i_0])) : (((/* implicit */int) arr_32 [i_0]))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_12 [i_0] [i_0] [i_2]))));
                        arr_34 [i_0] [i_0] [i_0] [i_2] [i_10] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1 + 2] [0U] [i_2 - 2] [i_10]);
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))), (((_Bool) (_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [(_Bool)1] [1] [i_0] [i_1 + 2] [i_11])) ? (((675861510U) / (427753159U))) : (((/* implicit */unsigned int) arr_21 [i_2] [(_Bool)1] [i_0] [i_0] [i_2] [i_2 + 1] [i_0]))));
                        arr_38 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_1 - 2] [1ULL] [i_2] [i_2] [i_0] [i_11])) >= (((int) (_Bool)1))));
                    }
                }
                var_28 += ((/* implicit */unsigned int) arr_22 [i_0] [i_0 + 2] [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
