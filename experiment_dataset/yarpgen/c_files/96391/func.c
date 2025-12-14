/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96391
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((unsigned long long int) ((var_3) ? (var_2) : (-713652284)))) != (((/* implicit */unsigned long long int) var_5))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((short) var_11)));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_3))))) < (var_2)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_4))));
                        arr_16 [i_0] [i_0] [i_2] [i_5 - 1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_6)))));
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_15 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((var_1) ? (3291706824490178817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                            var_16 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) ^ (15155037249219372799ULL)));
                            arr_22 [i_0] [i_1] |= ((/* implicit */unsigned short) var_1);
                        }
                        /* LoopSeq 2 */
                        for (short i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            arr_26 [(short)5] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 15155037249219372774ULL)))) + (4294967295U)));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((_Bool) ((_Bool) (signed char)-58))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_18 |= ((((/* implicit */_Bool) (unsigned char)178)) ? (2305883202254850237ULL) : (((/* implicit */unsigned long long int) -588099758)));
                            arr_29 [i_0] [i_0] [(unsigned short)10] [i_0] [i_1] [(signed char)8] &= ((/* implicit */unsigned short) ((unsigned char) 18446744073709551593ULL));
                            var_19 -= ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                        }
                        arr_30 [i_0] [i_6] = ((/* implicit */short) ((((288230376151711740ULL) << (((15123873167436377110ULL) - (15123873167436377060ULL))))) > (((/* implicit */unsigned long long int) -588099736))));
                        arr_31 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) var_9)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_20 &= ((/* implicit */unsigned long long int) var_0);
                        var_21 &= ((/* implicit */short) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) 34ULL)) ? (3291706824490178841ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20489))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
                        var_22 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_2] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((var_0) ? (((/* implicit */unsigned long long int) var_7)) : (15155037249219372799ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) / (var_8))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_9))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (var_5)))) ? (((/* implicit */int) (short)14851)) : (((/* implicit */int) ((unsigned char) var_0)))));
                    }
                    var_25 = ((/* implicit */signed char) ((((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (1048568ULL) : (15155037249219372791ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))));
                }
                for (signed char i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    arr_41 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) 3322870906273174506ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) (unsigned char)125)))))) ? (((((/* implicit */int) ((short) 3322870906273174506ULL))) * (((/* implicit */int) var_11)))) : (var_5)));
                    arr_42 [i_0] [i_0] [i_12] = ((/* implicit */int) var_0);
                    var_26 = ((/* implicit */unsigned char) var_6);
                    var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) var_10)), (var_8))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)77))) : (((/* implicit */int) var_10))));
                    arr_43 [i_0] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) != (((((/* implicit */int) (unsigned char)153)) >> (((16080080872841711142ULL) - (16080080872841711113ULL)))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (short)0))));
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)102)))));
    }
}
