/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88388
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
    var_13 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 &= ((/* implicit */int) max((9395484767476699329ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52)))))))))));
        var_15 = ((/* implicit */_Bool) 9051259306232852284ULL);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            {
                arr_7 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)204)) : ((-(((/* implicit */int) arr_2 [i_1] [i_2])))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((_Bool) arr_1 [i_4])))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)70)) ? ((~(((/* implicit */int) var_0)))) : (-1331324764)));
                            /* LoopSeq 3 */
                            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (arr_3 [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2] [i_4])) + (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) var_8)))))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-((~(32767ULL))))))));
                                arr_14 [i_1] [i_2] [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)180)) + (((/* implicit */int) (unsigned short)29808))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)204)), (1446021645U)))) ? (((/* implicit */int) (signed char)127)) : (-1915486513)))) : ((-(9051259306232852267ULL)))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                            {
                                var_20 = ((unsigned char) (-(1915486513)));
                                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1915486513)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) var_0)))) / (((arr_15 [i_1] [i_2] [i_3] [i_1] [3]) - (var_2)))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                arr_21 [i_1] [i_3] [i_2] = ((/* implicit */signed char) 9395484767476699329ULL);
                                arr_22 [i_1] [i_1] [i_2] [9ULL] [i_2] [i_4] [i_2] = ((/* implicit */short) -1915486515);
                                var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_13 [i_1] [i_2] [i_2] [(unsigned short)11] [i_4] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_11 [i_1] [i_1] [i_2] [i_2]), (arr_11 [i_1] [i_1] [i_2] [i_2])))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_11 [i_1] [11ULL] [i_2] [i_2]))))));
                arr_23 [i_2] = ((/* implicit */signed char) (unsigned char)85);
            }
        } 
    } 
}
