/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64550
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
    var_16 = (unsigned char)53;
    var_17 = ((/* implicit */long long int) var_9);
    var_18 = var_14;
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)143)) + (((/* implicit */int) arr_0 [i_0]))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) >> (((((var_13) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) - (3240863138380974025LL)))))) ? (((/* implicit */int) (unsigned char)40)) : (((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) ((unsigned char) var_9))) - (56)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_1] [i_0] [i_0] |= var_14;
            var_22 = ((unsigned char) arr_1 [i_0]);
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) (~((-(((((/* implicit */int) arr_5 [i_0] [i_4])) << (((((/* implicit */int) var_5)) - (215)))))))));
                            arr_13 [i_2] [i_2] [i_2] [4LL] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_4]) : (-8219101182185809588LL))) : (((((/* implicit */_Bool) -6546529873548722096LL)) ? (var_13) : (var_15)))))) ? ((((!(((/* implicit */_Bool) -5304285568213085459LL)))) ? (((-7917717757084189278LL) / (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5304285568213085458LL)) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [3LL] [i_0] [i_0] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                            arr_14 [i_0] [i_4] [i_2] [i_3] [(unsigned char)16] &= ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : ((-(arr_6 [i_2 - 1] [i_0]))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_2] [(unsigned char)2] = ((/* implicit */long long int) arr_0 [i_0]);
            }
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    arr_21 [i_0] [i_6] [i_5] [i_6] = max(((unsigned char)188), ((unsigned char)27));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((5304285568213085466LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))))))) > (var_8))))));
                    var_25 = var_7;
                    arr_22 [i_1] &= ((unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (max((-886654966220632953LL), (((/* implicit */long long int) (unsigned char)84)))) : (-6507396592724222387LL)));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (long long int i_8 = 4; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
                            var_27 |= ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */int) (unsigned char)85)) % (((/* implicit */int) (unsigned char)7))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2569172825067353428LL)) && ((!(((/* implicit */_Bool) -6038382087390368146LL))))))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (min((max((var_2), (var_8))), (((((/* implicit */_Bool) (unsigned char)123)) ? (arr_8 [i_8 - 3] [i_8 - 3] [i_8] [i_8] [i_8 - 3]) : (var_13)))))));
                            var_29 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)194))));
                            var_30 = ((/* implicit */long long int) min((var_30), (arr_24 [i_8] [i_8 - 2] [i_5] [i_8 - 2] [i_5])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_9] [i_10])) ? (((/* implicit */int) max(((unsigned char)123), ((unsigned char)21)))) : (((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_0])))));
                            var_32 = ((/* implicit */long long int) var_9);
                            var_33 = ((/* implicit */long long int) var_11);
                            arr_32 [(unsigned char)16] [i_9] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 8818173103209204939LL)) ? (-1268508515416614977LL) : (8724643111642143630LL))), (max((arr_29 [i_0] [i_0] [i_0]), (arr_29 [i_5] [i_5] [i_1])))));
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (long long int i_11 = 2; i_11 < 16; i_11 += 3) 
    {
        arr_36 [i_11] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
        var_34 &= arr_0 [i_11 - 1];
    }
    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        var_35 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(9054560881298694422LL)))) ? (max((arr_39 [i_12]), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) > (9060144588742573560LL))))))), (var_4)));
        arr_40 [i_12] = var_3;
    }
}
