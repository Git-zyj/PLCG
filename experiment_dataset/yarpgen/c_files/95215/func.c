/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95215
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_14)), (var_10))) << (((/* implicit */int) ((_Bool) ((signed char) var_9)))))))));
    var_18 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19094)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))) ? (((((/* implicit */int) (signed char)-23)) ^ (((/* implicit */int) (short)23145)))) : ((~(((/* implicit */int) (short)23171)))))) != (((/* implicit */int) (short)135)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)168)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)255);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-40)) && (((((/* implicit */_Bool) -1775451073)) || (((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (unsigned char)198))))))))))));
                                var_20 += ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) -1775451087)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((1775451087) | (((/* implicit */int) (_Bool)0))))))))));
                                var_21 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)224)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3712758135787344596LL)) ? (((/* implicit */int) (signed char)127)) : (-1775451087)))) ? ((~(((/* implicit */int) (unsigned char)15)))) : (min((1775451106), (-1775451087))))) + (45)))));
                                arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                            }
                            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)240)))) ? (((((/* implicit */_Bool) 1775451078)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((-1775451087) + (2147483647))) >> (3ULL)))))))));
                                arr_23 [i_0] [(unsigned short)0] [(unsigned short)0] [(signed char)12] [i_0 + 1] |= ((/* implicit */unsigned short) (signed char)47);
                                arr_24 [i_3] [1U] [1U] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2825831188U)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2146195110U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)135)) != (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)40)))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-41)), ((unsigned char)255))))) + (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
