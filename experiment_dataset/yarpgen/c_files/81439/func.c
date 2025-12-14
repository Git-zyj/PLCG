/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81439
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
    var_13 = ((/* implicit */unsigned int) -4959195833387155369LL);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 2147483647))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0]))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [(signed char)11] = ((/* implicit */long long int) ((((_Bool) 67108352U)) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_0])));
            arr_8 [i_2] [i_0] = ((/* implicit */unsigned char) var_9);
            arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1460640379)) ? (((/* implicit */int) (short)-27169)) : (-1874450100)))) ? (arr_2 [i_2] [(_Bool)0]) : (((/* implicit */int) (short)32524))));
        }
        arr_10 [0LL] = ((/* implicit */unsigned short) ((int) var_0));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                {
                    var_16 |= ((/* implicit */short) max((((/* implicit */long long int) ((short) arr_11 [i_4 + 4] [12LL] [i_0]))), (((((/* implicit */_Bool) 739988081U)) ? (-5123793902856088086LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))))));
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_11)), (min((-4910857049408810257LL), (((/* implicit */long long int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-119)) ^ (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            var_18 -= ((/* implicit */int) var_8);
                            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)31763))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((4065291535U) * (3694852363U))))))));
                            var_21 = ((/* implicit */int) (~(-9223372036854775804LL)));
                        }
                    }
                }
            } 
        } 
    }
    var_22 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)50))))));
}
