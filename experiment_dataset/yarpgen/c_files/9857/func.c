/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9857
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(max((((/* implicit */long long int) (signed char)61)), (164077466246953587LL))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min(((signed char)45), (((/* implicit */signed char) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3398697207303958962LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [(unsigned char)0] |= ((/* implicit */_Bool) (unsigned char)127);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (short)-7473))));
        var_17 -= ((/* implicit */unsigned int) var_9);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_5 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_13))));
            var_19 = ((/* implicit */long long int) (~(990077874U)));
            arr_10 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-1))));
            var_20 = ((((/* implicit */long long int) 1698070262U)) == (arr_7 [i_2] [i_2 - 1] [i_1 - 1]));
        }
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_13 [2U] [i_3] = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1 + 1]);
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-14932))) / (-164077466246953588LL))))));
                            arr_20 [i_1] [i_1] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) arr_17 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]);
                            var_22 = ((/* implicit */_Bool) var_6);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-70)))))));
                        }
                    } 
                } 
            } 
        }
        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((short) (unsigned short)12099))) : (((/* implicit */int) (_Bool)0))));
    }
    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(14432146168333011475ULL))))));
}
