/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61704
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
    var_12 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)34889), (((/* implicit */unsigned short) var_0))))), (min((((/* implicit */int) var_8)), (1714635999)))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (-1714636000)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((((((/* implicit */_Bool) 219633995756811976LL)) || (((/* implicit */_Bool) 4431198880197447793LL)))) ? (max((((/* implicit */unsigned int) -1714636006)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)31674)))));
                            var_14 = ((/* implicit */short) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((unsigned long long int) min((((4431198880197447793LL) / (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) max((1714636000), (((/* implicit */int) var_10))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned short)12251))))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    arr_19 [i_4 + 1] [i_5] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_1))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_6))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)112)) ^ (((/* implicit */int) (unsigned char)0))));
                    arr_20 [i_5] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((63) >= (((/* implicit */int) var_4)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_23 [17] [i_4] [i_7] [i_4] = ((/* implicit */unsigned char) var_2);
                    var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_8)) - (24334))))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (signed char)-66);
                                var_23 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-13)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) : (586960896021624371LL))) <= (((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((int) var_10)))))));
                                arr_29 [i_4] [i_5] [i_7] [i_8 - 1] [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_5)), (-1714636000))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
