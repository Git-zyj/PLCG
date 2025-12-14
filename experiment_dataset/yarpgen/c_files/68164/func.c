/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68164
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_8))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1098657742647748787LL)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65535))))) ? ((-(((/* implicit */int) (unsigned char)117)))) : (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_1)) + (22698)))))))) : (max((var_12), (max((3075307030U), (((/* implicit */unsigned int) (unsigned short)8))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_0] [(short)17] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30608)) && (((/* implicit */_Bool) 134201344))))) : (((/* implicit */int) (signed char)-93))))) || (((/* implicit */_Bool) 3309656353052991757LL))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((4294967295U) << (((((/* implicit */int) arr_2 [(unsigned char)2] [13] [(unsigned char)14])) - (37))))) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) < (((/* implicit */int) (unsigned short)65534))))) : (((/* implicit */int) (signed char)-8))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_9) : (((/* implicit */long long int) arr_3 [i_0] [i_1] [9])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)34933)), (1754222977U)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-29)))))));
                }
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(15LL)))) ? (max(((+(4294967285U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (short)(-32767 - 1)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3] [(_Bool)1] [i_1])) && (((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_1] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_4] [i_5] = min((max((2540744318U), (((/* implicit */unsigned int) (-2147483647 - 1))))), (min((2641649988U), (arr_10 [i_0] [i_3]))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) -996394276)) ? (((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_5] [i_3]))) : (18446744073709551594ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [(unsigned char)11] [(unsigned char)1]))))))) : (((/* implicit */unsigned long long int) max((arr_3 [i_4 + 1] [i_4 - 1] [i_4 + 1]), (((/* implicit */int) arr_0 [i_4 - 1] [7]))))))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65530)) ? (524287ULL) : (((/* implicit */unsigned long long int) 7032328878451863654LL))));
                                var_26 -= arr_8 [i_0];
                                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_14 [i_4 + 1] [i_4] [i_4])))) ^ (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
}
