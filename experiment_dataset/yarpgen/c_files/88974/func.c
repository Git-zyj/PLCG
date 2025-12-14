/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88974
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
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) -1799532896);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) var_12);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_23 &= ((/* implicit */signed char) (-(-277866940)));
                        var_24 = (!(((/* implicit */_Bool) var_0)));
                        var_25 = (-(((/* implicit */int) (unsigned short)19187)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (unsigned char i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((arr_12 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_5 + 1] [(unsigned char)8]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_15 [i_6] [i_5] [i_4] [9ULL] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_12 [(unsigned char)5] [i_5] [(unsigned short)10] [i_5 - 1] [i_6]));
                            var_27 = ((/* implicit */unsigned long long int) (unsigned short)45400);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */signed char) ((((-4664189011908297618LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))))) & (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
            var_29 = ((/* implicit */unsigned int) (_Bool)1);
            var_30 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(((/* implicit */int) var_11)))))));
        }
    }
    var_32 = ((/* implicit */unsigned short) (unsigned char)255);
    var_33 = ((/* implicit */unsigned long long int) var_16);
}
