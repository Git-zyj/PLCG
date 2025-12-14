/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66285
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
    var_14 = ((/* implicit */short) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) min((var_4), (var_4)))) ? (((((/* implicit */_Bool) (unsigned short)22837)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) var_2))))));
    var_15 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (var_2)))), (max((var_11), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_3)))))));
                            var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) < (var_13))))) : (var_13))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                            var_18 = ((/* implicit */_Bool) (~(min(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))), ((-(((/* implicit */int) (short)21818))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_16 [i_4] [i_1 - 1] [i_4] [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) (+(max((min((var_10), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (+(var_5))))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((-(((arr_15 [i_6] [i_5] [i_4] [i_5] [i_4] [i_1] [i_0]) ? (((/* implicit */int) (short)-10163)) : (((/* implicit */int) (unsigned char)28)))))) + (((/* implicit */int) (signed char)-1)))))));
                                var_20 += ((/* implicit */short) max((((/* implicit */int) arr_13 [(signed char)9] [i_1 - 1] [(signed char)9] [(_Bool)1] [i_1])), (var_2)));
                                arr_17 [(unsigned char)7] [i_0] [i_0] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (-6851723774515925798LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), ((~(var_13))))))));
                                var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 - 1])) : (-1308823444)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_7] [i_7] [i_8] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) (signed char)-79)) ? (var_12) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))), (max((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_8)))), ((+(((/* implicit */int) var_4))))))));
                            var_22 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
            }
        } 
    } 
}
