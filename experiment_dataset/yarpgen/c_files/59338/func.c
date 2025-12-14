/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59338
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
    var_10 = ((/* implicit */short) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned char)18), ((unsigned char)229)))) <= (((((/* implicit */int) var_7)) % (((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))) + (((((/* implicit */_Bool) (unsigned char)0)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)204)))))));
                var_11 = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (+(var_2)))))), (((/* implicit */unsigned long long int) ((long long int) (+(var_9)))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) (+((-(max((((/* implicit */long long int) var_7)), (-7641642909175546553LL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_2]))))), (arr_9 [(_Bool)1] [i_2]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551600ULL)))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_10 [i_2]);
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) var_0);
                arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)15)), ((unsigned short)36552))))));
                arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) arr_13 [i_2]))), ((+(((/* implicit */int) var_7))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_14 += ((/* implicit */unsigned long long int) var_4);
                arr_26 [10U] [i_2] [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) var_4)))))) % ((+(((/* implicit */int) (_Bool)1))))));
            }
            var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-6280155932693558122LL), (((/* implicit */long long int) var_5))))) ? (max((((((/* implicit */_Bool) var_1)) ? (-6280155932693558125LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)36552)) : (((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (~(4294967284U))))));
        }
        var_16 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((+(4294967287U)))))), (max((((/* implicit */unsigned long long int) 4294701825U)), (74885651307722556ULL)))));
        arr_27 [i_2] [i_2] = ((/* implicit */unsigned short) var_8);
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        arr_30 [i_6] = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((var_9), (17762363072285840640ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (max((-7641642909175546567LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) min((4294967285U), (((/* implicit */unsigned int) (unsigned short)65525))))))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)201)) << (((min((((/* implicit */unsigned long long int) (unsigned short)65514)), (9907850070316698321ULL))) - (65497ULL))))))));
                    arr_36 [i_6] [17ULL] [i_8] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_0)))), ((+(var_3)))));
                    arr_37 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) -2046539927)) : (max((((/* implicit */unsigned int) (unsigned short)33975)), (4294967260U)))))));
                    arr_38 [i_8] = ((/* implicit */signed char) max((((/* implicit */int) min(((unsigned short)20481), (((/* implicit */unsigned short) arr_35 [i_8 + 2] [i_8] [i_8 + 2] [i_8]))))), (((((/* implicit */_Bool) arr_31 [i_8 + 2] [i_8] [(unsigned char)6])) ? (((/* implicit */int) arr_34 [i_8 + 2] [i_8 + 1] [(signed char)4])) : (((/* implicit */int) (unsigned char)68))))));
                }
            } 
        } 
    }
}
