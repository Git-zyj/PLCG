/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86288
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((signed char) arr_14 [i_1] [(_Bool)0] [(unsigned short)7] [i_3] [i_3 - 1]));
                            arr_16 [i_2] [i_2] |= ((/* implicit */signed char) (-((((_Bool)1) ? (arr_3 [i_0] [i_2 - 2]) : (arr_3 [(unsigned short)9] [i_2 + 2])))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                arr_19 [i_1] [i_2 - 2] [i_3] [i_1] = (-(((((/* implicit */_Bool) arr_12 [14LL] [i_1] [i_1])) ? (max((((/* implicit */long long int) (signed char)-21)), (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))))));
                                arr_20 [i_1] [6ULL] [(signed char)14] [i_3] [i_4] [12ULL] [i_3 - 3] = max((((((/* implicit */_Bool) max((4194633426438816755LL), (((/* implicit */long long int) var_10))))) ? (arr_18 [1LL] [i_1] [i_2 + 4] [i_3 - 2]) : (((/* implicit */unsigned long long int) arr_12 [i_1] [(unsigned short)13] [i_1])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_13 [(unsigned short)2] [i_1] [i_2 - 1] [(_Bool)1])))))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_1] [(unsigned short)0] [i_1])))) != (((7994192543172829640LL) ^ ((-(-7994192543172829640LL)))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                            {
                                arr_23 [13ULL] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */long long int) var_6);
                                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1])) || (var_9))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2 + 4] [i_3] [i_1])) ? (arr_3 [(signed char)0] [i_1]) : (7994192543172829639LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) || (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (arr_4 [i_0 + 1] [i_0 + 1] [i_2])))));
                                var_14 = var_7;
                                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_3 + 1]));
                            }
                            var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_2] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [3LL] [i_1])) : (10160760876422683143ULL))) <= (((/* implicit */unsigned long long int) (-(arr_12 [i_0 + 2] [i_2] [i_1]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((((arr_6 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_11 [i_0] [i_1] [8ULL] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) -7994192543172829640LL)) ? (-7994192543172829630LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35241))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min(((signed char)45), (((/* implicit */signed char) (_Bool)1))));
    var_19 = ((/* implicit */unsigned short) -7994192543172829668LL);
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) ((3300732946116806418LL) | (-7994192543172829651LL)))) : (min((((/* implicit */unsigned long long int) (unsigned short)30295)), (((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (_Bool)1);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_21 [i_10] [3LL] [i_10] [i_10] [i_7 + 1]) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))) | (((/* implicit */int) var_1))));
                                arr_38 [i_6] [i_9] [i_9] [i_9] [i_7 + 1] [i_6] = ((/* implicit */unsigned short) max((arr_2 [i_7 + 1]), ((~(((((/* implicit */_Bool) arr_7 [i_9] [(unsigned short)4])) ? (3333057450774594803LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
