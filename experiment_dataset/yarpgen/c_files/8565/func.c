/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8565
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
    var_20 = ((/* implicit */short) ((unsigned int) (unsigned char)89));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) var_0);
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3694886622U)) ? (68715282432LL) : (-6608495077838750139LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (5493064843591427753LL)))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1])) : (((267603417771426154ULL) & (((/* implicit */unsigned long long int) 6249328461736547681LL))))))));
                var_22 = ((/* implicit */signed char) min((((/* implicit */short) ((_Bool) arr_0 [i_1 - 2] [i_1 - 2]))), (((short) ((((/* implicit */unsigned long long int) var_10)) ^ (var_12))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_0))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_0] [(unsigned short)5]))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) & (var_13))))))) ? (((((/* implicit */_Bool) (~(arr_2 [i_1 - 3] [i_3 - 1])))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (5493064843591427753LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_2 - 2]) > (arr_6 [i_2 - 1])))))));
                        arr_13 [(short)16] [i_1 + 1] [i_3 - 1] [i_3] [i_3 - 1] [6U] &= ((/* implicit */signed char) arr_1 [i_3]);
                    }
                }
                /* vectorizable */
                for (unsigned int i_4 = 3; i_4 < 18; i_4 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_2))));
                    var_25 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_0] [i_1 - 2] [i_1 - 2] [i_0]))))) & (arr_1 [i_4])));
                    arr_18 [i_4 - 2] = ((/* implicit */unsigned long long int) ((arr_6 [i_0]) & (arr_2 [i_4 + 1] [i_1])));
                    var_26 = ((((/* implicit */int) ((((/* implicit */unsigned int) 326452844)) > (3694886626U)))) | (((/* implicit */int) var_19)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_6] [i_5] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) == (((var_3) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_5])) & (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) 
                            {
                                var_28 = ((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5]);
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */unsigned int) min((min((arr_8 [i_0] [i_7]), (((/* implicit */int) var_8)))), (((/* implicit */int) var_19))))) % (var_7))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(((/* implicit */int) (((-(arr_2 [i_1 - 3] [i_0]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12))))))))))));
                                var_31 += ((/* implicit */unsigned short) min((max((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)0] [i_1] [i_8])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (min((136373113U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1 - 3] [i_5] [i_5] [i_0])))))));
                                arr_28 [i_0] [i_0] [i_5] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) (short)-30132);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
