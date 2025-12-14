/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66533
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)32704)) : (((/* implicit */int) var_2)))) != (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_12 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6567))) : (arr_2 [i_1] [i_0]))))))));
            var_13 = ((/* implicit */int) (signed char)-123);
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1 - 1] [i_2] [i_1 - 1]), (((/* implicit */short) arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2] [i_2])))) : (((/* implicit */int) (unsigned short)15030))));
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_10 [i_3] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_3] [i_1 - 1]))))), (5499505421950300591LL)));
                    arr_11 [i_3] [i_3] [i_2] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) min(((unsigned char)0), (arr_4 [i_2] [i_1])))) / (((/* implicit */int) (short)8191))))));
                    var_15 = ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) var_2))))))));
                }
                for (unsigned int i_4 = 3; i_4 < 11; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_16 |= ((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) arr_15 [i_0] [i_1] [i_1 - 1] [i_4 - 1] [i_1 - 1] [i_0])))))));
                    }
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)122))))))) : ((+(arr_0 [i_4 - 3] [i_1 - 1])))));
                }
                var_19 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1]))))) - ((-(min((5594068598082985527ULL), (((/* implicit */unsigned long long int) 3526198547U)))))));
            }
            for (short i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned char)254))));
                var_21 = ((/* implicit */long long int) min((var_21), (8863662740340011041LL)));
            }
            for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_22 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_7] [i_1 - 1])))), ((+(((/* implicit */int) arr_6 [(unsigned char)2] [i_7] [i_7] [i_1 - 1]))))));
                arr_21 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) + (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)122)), ((unsigned char)12))))));
                var_23 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)255));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)93))))) ? (((/* implicit */unsigned int) -1759657768)) : (var_0)));
            }
            arr_22 [i_0] = ((/* implicit */unsigned short) (short)-22753);
        }
    }
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) (((+(((/* implicit */int) (unsigned short)50501)))) == (((/* implicit */int) (short)8191)))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((_Bool) var_0)))))))));
        arr_28 [i_8] = (-(min((1696031662U), (((/* implicit */unsigned int) (unsigned char)0)))));
    }
    for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) ((_Bool) (signed char)-109))), ((-(16777088U))))), (((/* implicit */unsigned int) (short)2))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((arr_30 [0U]), (((/* implicit */long long int) ((arr_26 [i_9]) % (var_7)))))))));
        arr_31 [i_9] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [i_9])) : (((/* implicit */int) (_Bool)1))))));
        arr_32 [i_9] = ((/* implicit */short) 1257262161);
    }
}
