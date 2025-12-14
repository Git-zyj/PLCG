/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95808
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(var_9)))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), (2147483647)))) ? (((/* implicit */int) (unsigned short)42198)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65530)) == (((/* implicit */int) (unsigned short)34466))))))) : (-573694808)));
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) var_6)), (8855362954386071748ULL)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_13 += ((min(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) (signed char)16)) || (((/* implicit */_Bool) (signed char)-125)))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)2016)))))) : (((/* implicit */int) var_4)));
                            var_14 = (+(((int) (unsigned char)47)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_4] [i_4] |= ((/* implicit */int) ((long long int) (~((~(arr_12 [i_4] [i_5] [i_4] [i_4]))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_5] = ((/* implicit */signed char) var_0);
                            /* LoopSeq 2 */
                            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                            {
                                var_15 -= ((/* implicit */unsigned short) (+(((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (var_0)));
                                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_4] [i_1])) ? (((/* implicit */int) arr_18 [i_6] [i_0] [i_6] [i_5])) : (arr_0 [i_1]))), (((/* implicit */int) (unsigned char)46))));
                                arr_19 [i_6] [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-31)))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(var_7))))));
                            }
                        }
                    } 
                } 
                arr_22 [i_0] [i_1] = max((((((/* implicit */_Bool) (unsigned short)44651)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (var_7))))), (((/* implicit */unsigned long long int) (signed char)-125)));
                arr_23 [i_1] = ((/* implicit */long long int) max(((+(max((((/* implicit */unsigned long long int) arr_0 [12])), (arr_11 [i_0]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)203)))))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned char) (+(var_9)));
                                var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) ((signed char) var_6))))) : (arr_0 [(signed char)3])));
                                arr_32 [i_0] = (+(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_25 [i_0] [17ULL] [i_0] [i_10])))))));
                                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) arr_18 [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 -= ((/* implicit */signed char) ((unsigned short) (+(min((var_10), (((/* implicit */int) (signed char)-65)))))));
}
