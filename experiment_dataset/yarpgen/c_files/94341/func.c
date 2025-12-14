/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94341
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] = arr_5 [i_0] [i_1 - 2];
                arr_8 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((_Bool) max((arr_4 [i_1 + 1] [i_1 + 1] [i_1]), (arr_4 [i_1 - 2] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? (((/* implicit */unsigned long long int) min((1013582947300777519LL), (3125983730932129989LL)))) : (6696230154971931997ULL))))))));
                            arr_13 [i_2] |= ((/* implicit */short) (+((-(((/* implicit */int) var_7))))));
                            arr_14 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_2 - 3])) : (((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_3] [i_2 - 3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                arr_20 [i_5] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) < (-3125983730932129983LL)))) >> (((((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_19 [i_5]) : (((/* implicit */unsigned int) var_3)))) - (1054431912U)))))) <= (((((/* implicit */_Bool) (+(-534934469)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (max((11750513918737619595ULL), (arr_15 [i_5])))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 23; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)46))));
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 2861058212U)))))) ? (((long long int) arr_25 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 2])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_22 [(_Bool)1])), (arr_19 [i_7])))) < (max((((/* implicit */unsigned long long int) arr_19 [i_6])), (arr_15 [i_6 + 2]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (unsigned int i_9 = 1; i_9 < 23; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                arr_36 [i_4] [i_5] [i_8] [(unsigned char)9] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) 1897739410U)))))), (max((max((6696230154971931995ULL), (((/* implicit */unsigned long long int) arr_31 [i_5] [i_8] [i_5] [i_8])))), (max((((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_5] [i_5] [i_10])), (arr_28 [i_4] [i_8] [i_8] [i_8])))))));
                                var_13 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_27 [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_27 [i_9 - 1] [i_9])) : (((/* implicit */int) arr_27 [i_9 + 1] [19ULL])))));
                                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)128))));
                                var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) arr_19 [i_4])) ? (((/* implicit */int) (unsigned char)46)) : ((-(arr_25 [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 - 1])))))));
                            }
                        } 
                    } 
                } 
                arr_37 [(unsigned char)2] [i_5] [(unsigned char)2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (-2147483647 - 1)))) ? (min(((-(((/* implicit */int) arr_34 [i_4] [14ULL] [i_5] [i_5] [i_4])))), (((/* implicit */int) ((short) 4294967267U))))) : (((/* implicit */int) arr_23 [i_4] [i_4] [i_4]))));
            }
        } 
    } 
}
