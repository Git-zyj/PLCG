/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99423
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))));
                    var_17 = (_Bool)0;
                    var_18 ^= var_7;
                    arr_9 [i_0] [i_1] [i_2] = var_14;
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_5);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_12))));
            var_20 = ((/* implicit */long long int) var_13);
            var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) 3973324241161994608LL)) ? (-3973324241161994609LL) : (-1LL)));
            var_22 = var_15;
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_15 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-3973324241161994612LL)))));
            var_23 = ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) / (((/* implicit */int) var_12))))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -16LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1554017949U)))) : (((-16LL) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 127U)) : ((~(var_9))))) : (var_9)));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) + (var_9)))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) var_7))));
        }
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
        var_27 *= ((/* implicit */_Bool) var_4);
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            var_28 = ((/* implicit */int) max((var_14), (max((((/* implicit */unsigned char) var_11)), (var_14)))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3973324241161994609LL)) ? (((((((/* implicit */_Bool) 8840337208689430525LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (1LL))) + (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3131856249U)))))) : (((((/* implicit */_Bool) max(((signed char)110), (((/* implicit */signed char) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-3973324241161994604LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) max((var_6), ((_Bool)0)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)60237))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 4176941406U)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)63), (((/* implicit */unsigned char) var_1)))))) : (var_9)))) : (((unsigned long long int) (unsigned char)51))));
        }
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_14))));
        var_33 = ((/* implicit */long long int) var_4);
        var_34 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3131856261U)) ? (-3973324241161994608LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (~(((/* implicit */int) var_1))))))));
    var_36 = ((/* implicit */unsigned int) ((((int) (signed char)127)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (141)))));
}
