/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56277
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
    var_11 *= ((/* implicit */signed char) var_0);
    var_12 ^= var_3;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (signed char)22);
        var_14 = ((/* implicit */_Bool) (unsigned short)27919);
    }
    for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_14 [(unsigned char)6] [i_2] [4U] [6ULL] [i_3] = ((/* implicit */unsigned long long int) (signed char)-62);
                        var_15 -= ((/* implicit */unsigned int) (short)25013);
                    }
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */int) (unsigned short)62047);
                        var_17 -= ((/* implicit */int) (short)-4369);
                    }
                    var_18 = ((/* implicit */unsigned char) -1LL);
                    var_19 = ((/* implicit */unsigned long long int) (unsigned short)14);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 441263955))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            for (short i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) -1707791702);
                    arr_21 [i_1] [i_6 + 1] [(_Bool)1] = ((/* implicit */signed char) (unsigned short)65529);
                    arr_22 [i_1] [(unsigned char)5] [(unsigned char)5] [(_Bool)1] = ((/* implicit */int) -5975719790625931432LL);
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (short)19085))));
                }
            } 
        } 
    }
}
