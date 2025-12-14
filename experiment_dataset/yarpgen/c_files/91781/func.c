/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91781
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) var_10)) ? (((long long int) 4095ULL)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (34225520640LL))));
                    var_11 = ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((((/* implicit */_Bool) (short)-30567)) ? (((/* implicit */long long int) 2302904352U)) : (-4834885462413392332LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_4)))));
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_0))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned int) (unsigned char)200);
                        var_13 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3149741159836976631LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (var_3) : (var_3)))) ? (((var_3) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
                        var_15 += ((((unsigned int) ((var_5) | (((/* implicit */unsigned long long int) var_3))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)48)) * (((/* implicit */int) var_2))))));
                    }
                    var_16 ^= ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (911079718321647004LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))));
                    var_17 = ((/* implicit */unsigned char) 2696096064U);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) var_0);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_2) ? (((/* implicit */unsigned long long int) var_3)) : (var_5)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)207))))));
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_8)))) ? ((((_Bool)0) ? (65535ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) : (-9200815071415928201LL))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) : (var_4)))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                                arr_26 [i_1] [i_0] [i_1] = (_Bool)1;
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */_Bool) var_10);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))) ? (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (_Bool)1))))) : (((4611684918915760128LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)132)) ? (((((/* implicit */_Bool) 1650010408368833114ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) var_10)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) var_4);
                }
                for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) / (((18227653120261343800ULL) / (((/* implicit */unsigned long long int) -3149741159836976632LL))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_27 &= ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) 16601313366734809336ULL)) ? (((/* implicit */unsigned long long int) -3149741159836976632LL)) : (var_5)))))) ? (((((/* implicit */_Bool) ((1258318191U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((long long int) (unsigned short)11459)) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((var_0) ? (((((/* implicit */_Bool) 3368922427U)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))))));
                                arr_40 [i_0] = ((/* implicit */unsigned int) 0LL);
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57080)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
                                var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2385)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) var_10))))) : (((long long int) (short)-2385)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (short)-6004)))) & (((/* implicit */int) var_0))));
                    var_31 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -747857224722111848LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) (signed char)43))))));
                }
                arr_41 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-2385)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_4);
}
