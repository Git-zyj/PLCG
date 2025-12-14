/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61432
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
    var_18 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (unsigned char)255);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_2] = ((/* implicit */int) (unsigned char)255);
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (((long long int) var_9))))) ^ (arr_1 [i_4])));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3744093426U)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_5))))) ? (min((550873842U), (((/* implicit */unsigned int) 2147483633)))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_4])) + (2147483647))) << (((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_0])) - (224))))))))) || (((/* implicit */_Bool) (unsigned char)12))));
                                var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) -2147483634)) == (var_2)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 4; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_23 += ((/* implicit */unsigned long long int) var_17);
                        var_24 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_5 - 1] [i_5 - 1])) > (2ULL))) ? (((long long int) arr_9 [i_5 - 1] [i_0 + 2] [i_5 - 1] [i_5 - 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_1] [i_5 - 4] [i_0])) ? (((/* implicit */int) (unsigned char)1)) : (arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_5 - 1] [i_0 + 3]))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]);
                            var_26 -= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))) + (((((/* implicit */_Bool) var_2)) ? (0LL) : (((/* implicit */long long int) var_2))))));
                        }
                        var_27 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483635)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))))) && (((/* implicit */_Bool) min((((/* implicit */signed char) var_9)), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_5 - 3]))))));
                    }
                    for (short i_7 = 4; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        var_29 = ((/* implicit */unsigned char) max((((/* implicit */int) var_12)), (((int) (!(((/* implicit */_Bool) var_15)))))));
                        var_30 ^= ((/* implicit */int) ((long long int) (unsigned char)1));
                        var_31 &= ((/* implicit */unsigned int) (~((((!(var_11))) ? (max((26), (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_7)) - (((/* implicit */int) var_3))))))));
                    }
                    var_32 = ((/* implicit */short) ((((((((((/* implicit */_Bool) 550873869U)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) var_13)))) / ((~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])))))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)12)) ? (var_2) : (((/* implicit */unsigned int) min((arr_8 [i_2] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_5))))))) - (1912683272U)))));
                }
            }
        } 
    } 
}
