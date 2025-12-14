/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92551
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (arr_4 [i_0] [i_1] [i_1 + 2]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_21 -= ((_Bool) (unsigned short)54287);
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_1 [i_1]))))), (((((/* implicit */int) (unsigned short)11265)) << (((((/* implicit */int) (signed char)-118)) + (133)))))))) | (arr_2 [i_0] [i_1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) var_5)), (((var_10) << (((((/* implicit */int) var_0)) - (50836))))))));
                            var_24 = (((+(min((arr_4 [i_1] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_7)))))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            arr_16 [i_0] [17ULL] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [(_Bool)1] [i_1 + 1] [i_0]))) != (var_4))))) != (arr_4 [i_0] [i_0] [(unsigned short)9]))) ? (((((/* implicit */long long int) arr_8 [i_1] [i_1])) ^ (((var_4) | (((/* implicit */long long int) 2546504084U)))))) : (((/* implicit */long long int) min((var_19), (((/* implicit */int) (unsigned short)11276)))))));
                            var_25 |= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4])) << (((((((/* implicit */_Bool) 14789367924698976954ULL)) ? (3062693084549240165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (3062693084549240143ULL)))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61605)))))));
                            var_26 |= ((/* implicit */short) ((unsigned short) min(((short)-18161), (((/* implicit */short) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
                            {
                                var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 8544283042269033029ULL)) ? (((/* implicit */int) max((arr_18 [i_1]), (((/* implicit */signed char) ((((/* implicit */int) var_2)) == (((/* implicit */int) (short)11416)))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (5694119520788485043LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [(short)9])))))))));
                                var_28 = ((/* implicit */short) arr_18 [i_0]);
                            }
                            for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                            {
                                var_29 -= ((/* implicit */short) ((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)58249))))) | (((7881299347898368LL) >> (((/* implicit */int) var_14)))))) + (((((/* implicit */_Bool) arr_20 [i_7 + 2] [i_7 + 2] [i_6 - 3] [i_1] [i_1 - 1])) ? (arr_26 [i_7 - 1] [i_7 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7 + 1] [i_7 + 1])))))));
                                var_30 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_0])) < (((/* implicit */int) var_15))));
                                var_31 = ((/* implicit */unsigned char) max((((unsigned long long int) ((_Bool) 6237834632316230815LL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_8 [17U] [i_1])) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7])) && (((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) arr_7 [i_6 - 2] [i_7 + 1] [i_7] [i_0])))))));
                            }
                            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                            {
                                var_32 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((int) (unsigned short)3930)) : (min((var_19), (((/* implicit */int) var_6)))))));
                                var_33 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) arr_15 [(short)15] [i_1 - 2] [i_7 + 2] [i_10])));
                            }
                            for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                            {
                                arr_33 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */int) ((short) (signed char)-33))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_25 [i_0] [i_1 - 2] [i_6] [i_7] [i_0]))))))));
                                var_34 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (signed char)-1)))))), (((max((((/* implicit */unsigned long long int) var_13)), (10894098363920043790ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))))));
                                var_35 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_11]), (arr_12 [i_1]))))) + (((unsigned long long int) arr_12 [i_1]))));
                            }
                            var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11392)) ? (((/* implicit */int) (unsigned short)61614)) : (((/* implicit */int) (signed char)-115))))) + (min((var_1), (((/* implicit */unsigned long long int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 -= ((/* implicit */short) var_1);
}
