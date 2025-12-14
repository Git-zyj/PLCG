/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74077
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
    var_20 = ((/* implicit */unsigned char) (+(((max((((/* implicit */long long int) (unsigned char)3)), (4278190080LL))) & (((/* implicit */long long int) ((var_13) - (var_3))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) var_6);
        arr_2 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)66)) && (((/* implicit */_Bool) (unsigned char)187)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((unsigned long long int) (unsigned char)171))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-8311505352174479105LL))))));
        var_23 &= ((/* implicit */unsigned char) ((_Bool) var_2));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_3] = ((/* implicit */int) (unsigned char)167);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned char) (~(min((var_9), (((/* implicit */unsigned long long int) var_12))))));
                        arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) var_12);
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((7U), (((/* implicit */unsigned int) (short)-9700))))), (((((/* implicit */_Bool) 8908773429785897356ULL)) ? (var_11) : (3910177427345149582ULL))))), (((/* implicit */unsigned long long int) var_19))));
                            arr_16 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((unsigned int) max(((short)-9711), (((/* implicit */short) (unsigned char)0)))));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] [i_3] [i_1] [(unsigned char)8] [i_6] [i_6] = ((/* implicit */unsigned short) (~(13132389850406021556ULL)));
                            var_26 -= ((/* implicit */signed char) min(((~(((/* implicit */int) (short)-6085)))), (((/* implicit */int) var_8))));
                            var_27 &= max((var_3), (((/* implicit */unsigned int) var_6)));
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (var_0)))) ? ((+(((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -28996544)))))) ^ (8311505352174479104LL)))));
                        }
                        for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            arr_23 [i_3] [1U] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_8);
                            var_29 -= ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) >= (var_0))), (((min((var_9), (((/* implicit */unsigned long long int) var_14)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 24; i_8 += 1) 
                        {
                            arr_26 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((int) -8728494118436049223LL)) | (((/* implicit */int) (!(((/* implicit */_Bool) (~(8908773429785897356ULL)))))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) (short)15932)) - (15928)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967291U)), (var_15)))) ? ((-(var_18))) : ((~(((/* implicit */int) (unsigned char)22))))))) : (var_0)));
                            var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) ((12244058499561570649ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)10233)) >= (((/* implicit */int) (short)-11649)))))))))))));
                            var_32 = ((/* implicit */unsigned long long int) var_16);
                        }
                    }
                }
            } 
        } 
        arr_27 [(unsigned char)14] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (!(var_12))))))), (((max((var_11), (((/* implicit */unsigned long long int) var_16)))) >> (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_8))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        arr_30 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((8908773429785897368ULL), (((/* implicit */unsigned long long int) -2147483643))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)92))) != (-2486468577941566722LL))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_18)) : (var_1)))));
        arr_31 [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    }
    var_33 += ((/* implicit */unsigned int) var_15);
    var_34 = ((/* implicit */unsigned char) var_15);
}
