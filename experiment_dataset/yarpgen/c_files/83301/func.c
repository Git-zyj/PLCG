/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83301
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
    var_14 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_2] [(unsigned char)2])) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_4])) : (((/* implicit */int) (unsigned char)23)))))) * (((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_14 [i_0]))))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) >> (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_0 [24LL])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (var_12)));
                    arr_17 [3ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [(unsigned short)19] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [14] [i_0] [i_1])) : (((/* implicit */int) arr_10 [22LL] [20ULL] [i_1] [i_1])))) << (((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55)))))))) - (151)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 1; i_6 < 7; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6 + 2])) && (((/* implicit */_Bool) arr_9 [(_Bool)1]))))) >= (((/* implicit */int) ((arr_9 [i_5 - 1]) >= (arr_9 [(unsigned short)14]))))));
                arr_24 [i_5] = ((/* implicit */_Bool) max((((arr_7 [i_5 - 1]) ? (arr_2 [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_7 [i_5 + 1])), (var_10))))));
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 3) 
                        {
                            {
                                var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) (unsigned char)59))))));
                                arr_31 [(unsigned short)4] [5ULL] [i_5] [i_5] [5ULL] [i_5] = (!((!(((/* implicit */_Bool) arr_30 [i_5] [(unsigned char)1] [(_Bool)1] [i_9 + 3] [i_9 + 3])))));
                            }
                        } 
                    } 
                } 
                var_23 ^= min((((/* implicit */unsigned long long int) var_10)), ((((!(((/* implicit */_Bool) arr_16 [(unsigned short)8])))) ? (arr_12 [i_5 + 1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned char)65)) - (48)))))))));
            }
        } 
    } 
}
