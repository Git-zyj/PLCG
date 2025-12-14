/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59898
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)0)), (4294967295U))))));
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (max((((/* implicit */unsigned int) (short)1770)), (arr_1 [i_0]))))))));
        arr_3 [12U] &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -231864446)), (-7087896740839518017LL)))) || (((/* implicit */_Bool) ((short) (_Bool)1)))));
        var_14 = ((/* implicit */_Bool) (-(((arr_1 [i_0]) - (arr_0 [i_0 - 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
        var_15 = ((/* implicit */short) max((((/* implicit */long long int) min((arr_0 [i_1]), (arr_0 [i_1])))), (var_0)));
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)31764)) >> (((((/* implicit */int) var_8)) + (5285))))))) / (var_10)));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */signed char) max((((((/* implicit */int) var_3)) + (((/* implicit */int) arr_10 [i_2] [i_2])))), (min((var_10), (((/* implicit */int) arr_10 [11U] [i_2]))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            arr_20 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)8191)) - (arr_15 [i_2] [(_Bool)1] [i_2] [i_3]))) >> (((((/* implicit */int) (short)-1761)) + (1775))))))));
                            var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) -817784226)), (-2319197564891953771LL))) + (((/* implicit */long long int) max((arr_14 [i_3]), (arr_14 [i_3]))))));
                            arr_21 [i_2] [i_3] [i_2] [i_5 - 2] [(_Bool)1] &= (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_4)))));
                        }
                        for (short i_7 = 2; i_7 < 18; i_7 += 2) 
                        {
                            var_18 ^= ((/* implicit */int) max((((var_0) << (((arr_0 [i_2]) - (1924739901U))))), (((/* implicit */long long int) ((int) (unsigned char)167)))));
                            arr_25 [i_2] [i_2] [i_3] [i_4 - 1] [(signed char)1] [i_7 - 2] [i_3] = ((/* implicit */short) min((((/* implicit */int) (short)1761)), (-2054746092)));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            arr_28 [i_8] [i_5] [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_13 [i_2] [(unsigned char)18]))) && ((_Bool)0)));
                            var_19 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                            arr_29 [i_3] = ((/* implicit */signed char) var_11);
                        }
                        for (int i_9 = 4; i_9 < 18; i_9 += 1) 
                        {
                            var_20 ^= ((/* implicit */short) ((int) (unsigned char)2));
                            arr_32 [i_2] [i_3] [i_5 - 3] [i_5 + 1] [i_3] = ((/* implicit */int) (short)-20);
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_21 *= ((/* implicit */int) min(((~(min((((/* implicit */unsigned int) arr_14 [i_10])), (arr_27 [i_2] [i_3] [i_4 - 1] [i_5 - 3] [i_5] [i_10] [i_10]))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)84)) / (((/* implicit */int) (short)16368)))))))));
                            var_22 = ((/* implicit */int) ((unsigned long long int) var_4));
                        }
                        for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_23 ^= ((/* implicit */signed char) (_Bool)1);
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 7826844510973959124ULL))));
                        }
                        var_25 = ((/* implicit */int) min((var_25), ((+(1)))));
                    }
                } 
            } 
        } 
        var_26 += ((/* implicit */short) var_7);
    }
    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
    {
        var_27 ^= ((/* implicit */_Bool) arr_14 [i_12]);
        arr_39 [i_12] [i_12] = ((/* implicit */signed char) (((((_Bool)1) && (((((/* implicit */_Bool) 2147483648U)) && (var_7))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4292664277U))))));
    }
}
