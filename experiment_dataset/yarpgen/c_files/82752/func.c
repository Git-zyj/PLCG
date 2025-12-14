/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82752
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_2] [i_3]))) % (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3 - 3])))), (((((((/* implicit */int) (_Bool)1)) >> (((var_16) - (2551939306U))))) ^ ((~(((/* implicit */int) arr_5 [i_1] [i_1] [i_3]))))))));
                        var_19 = ((arr_4 [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) (~(1179301476)))));
                        var_20 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (unsigned short)53393)))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] |= ((/* implicit */signed char) var_2);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (short)(-32767 - 1)))) - ((+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_10) != (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) - (7858121654624304402ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) 16554863709799245680ULL)) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [2ULL] [i_0] [i_0] [11LL])) : (((unsigned int) arr_4 [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */int) (~(((long long int) ((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) | (arr_14 [i_4]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(short)4]))))), (min((arr_8 [i_4] [(unsigned char)6]), (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (short)-8975)))))))));
                    var_24 = ((/* implicit */short) max((var_24), (arr_5 [i_4] [i_4] [i_6])));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((int) (signed char)113));
    }
    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((signed char) (+(arr_0 [i_7]))));
        var_27 |= ((/* implicit */_Bool) max((-1), (353026884)));
        var_28 |= ((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */int) (signed char)-93)) & (-1590668724))), (((/* implicit */int) (_Bool)1)))));
        arr_22 [i_7] [i_7] = ((/* implicit */int) var_7);
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (short)-32754)))))) >> (((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_14))))) - (11238)))));
}
