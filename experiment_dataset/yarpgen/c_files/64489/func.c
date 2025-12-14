/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64489
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) ((unsigned short) arr_1 [i_0] [i_0]));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-((-((-(var_8))))))))));
                            var_12 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)215))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6569150036710374701ULL)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [9LL] [i_2] [i_3])) : (-1635240859))))))) : (((/* implicit */int) arr_8 [i_1 + 2] [i_1] [13] [i_3] [(unsigned short)13]))));
                            var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 9131174031158051123LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [20]))) : (11050301569084164275ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_2);
                    var_14 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_3 [i_5]))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min(((+(((/* implicit */int) (_Bool)1)))), (arr_1 [i_4] [i_5])));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5]))) : (((long long int) var_9))))) ? (max((((long long int) (unsigned short)14651)), (((/* implicit */long long int) max((arr_1 [i_7] [i_8]), (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_10 [i_6])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_27 [i_10] [i_5] [i_6] [i_10] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_10])) ? ((((!(((/* implicit */_Bool) arr_19 [i_4] [i_5] [(_Bool)1] [2U] [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1619119472U))))) : (((/* implicit */int) arr_10 [i_6])))) : (((/* implicit */int) (!(((_Bool) (unsigned char)150)))))));
                                arr_28 [i_4] [i_4] [i_4] [i_6] [i_10] [8LL] [i_10] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) min((arr_16 [i_4] [i_4] [i_4]), (((/* implicit */unsigned char) arr_14 [i_4] [i_4] [i_4]))))) + (((/* implicit */int) var_6)))), (((/* implicit */int) var_5))));
                                arr_29 [(signed char)1] [i_5] [(unsigned short)5] [i_10] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_6] [(unsigned char)20] [i_10])) : (((/* implicit */int) arr_6 [i_4]))))) ? (min((var_0), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9])))))) ? (((/* implicit */int) min((arr_3 [i_10]), (arr_3 [i_4])))) : (((/* implicit */int) (!(arr_5 [i_4] [i_4] [i_4]))))));
                                arr_30 [i_10] = ((long long int) min((((/* implicit */long long int) (-(var_0)))), (min((arr_23 [6LL] [i_10] [i_10] [6LL]), (((/* implicit */long long int) (unsigned char)192))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned char) var_0)))));
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_6] [2LL] [i_4] [2LL]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 2) 
    {
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            {
                arr_37 [i_11] = ((/* implicit */_Bool) ((int) ((arr_6 [i_11 - 1]) ? (((/* implicit */int) arr_6 [i_11 + 1])) : (((/* implicit */int) arr_6 [i_11 - 1])))));
                /* LoopNest 3 */
                for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    for (unsigned char i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            {
                                arr_45 [i_11] [i_12] [i_13] [i_14 + 1] [i_14] = ((/* implicit */unsigned int) (-(min((min((((/* implicit */long long int) var_7)), (var_4))), (((/* implicit */long long int) arr_3 [8]))))));
                                var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_11] [i_14] [i_13] [i_12]))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) arr_35 [i_11] [i_11] [i_12]);
                arr_46 [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) ((min(((!(((/* implicit */_Bool) (unsigned char)239)))), ((!(((/* implicit */_Bool) arr_0 [12] [i_12])))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)70)), (39106431891500944LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [10U])), (arr_42 [i_12] [i_12] [i_11 - 1] [i_11] [i_11 - 1])))) : (((/* implicit */int) (unsigned short)61542)))) : ((((!(((/* implicit */_Bool) var_9)))) ? (arr_36 [i_11] [i_12] [i_11 - 1]) : (((/* implicit */int) arr_39 [i_11] [i_11] [i_11]))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_8)) ? (var_8) : (2659472551U));
    var_21 = ((/* implicit */unsigned char) var_8);
}
