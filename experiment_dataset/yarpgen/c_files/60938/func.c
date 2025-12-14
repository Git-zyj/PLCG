/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60938
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((max((min((4120702200293894602LL), (((/* implicit */long long int) (signed char)113)))), (4120702200293894604LL))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_18 = ((/* implicit */unsigned long long int) (+((-(min((arr_1 [(short)19] [(short)19]), (arr_1 [i_0 + 4] [i_0])))))));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((short) (signed char)-61));
        arr_5 [i_1 - 3] = ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-61)) + (2147483647))) >> (((var_0) - (2449337748U))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-10724)) && (((/* implicit */_Bool) var_6)))))) == (4087204921U))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((arr_1 [i_2] [i_2]) ^ ((+(((/* implicit */int) arr_7 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_9 [i_3] [i_3])) % (((/* implicit */int) var_3)))))) ? (max((((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) arr_0 [i_3] [i_3])))) : (max((max((arr_4 [i_3] [i_3]), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) arr_8 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_24 [i_4] [i_6] [(unsigned char)5] [(unsigned char)5] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((unsigned long long int) arr_23 [i_6] [i_4] [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 1]))));
                                arr_25 [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) (~((-(((/* implicit */int) arr_20 [i_3] [i_3] [2] [i_3]))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) arr_20 [i_3] [i_4] [i_5] [(short)8]))))), ((+(arr_3 [i_4])))))));
                                arr_26 [i_3] [i_3] [i_4] [i_6] [i_7] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? ((-(((/* implicit */int) arr_7 [i_3])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-86)) == (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(arr_4 [i_6 - 1] [i_5 - 2]))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_17 [i_5] [i_6 - 1] [i_5])) ? (((/* implicit */int) arr_17 [i_3] [i_6 - 1] [i_3])) : (((/* implicit */int) (short)8015)))))))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((max((-3330584772466742680LL), (((/* implicit */long long int) var_1)))) != (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (long long int i_9 = 1; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_34 [i_3] [i_3] [i_4] [(signed char)9] [i_3] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) ^ (((/* implicit */int) ((signed char) (_Bool)1))))))));
                                var_22 = ((/* implicit */unsigned char) var_2);
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8021)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)61))) : (3330584772466742688LL)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (1887208802U))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)28)) : (((/* implicit */int) (unsigned char)239))))))));
    }
}
