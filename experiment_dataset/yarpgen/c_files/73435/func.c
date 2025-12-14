/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73435
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) (unsigned char)219);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (signed char)41)))) : (((/* implicit */int) (signed char)81))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) -1823029126);
                                var_12 = ((/* implicit */long long int) var_6);
                                var_13 *= ((((/* implicit */int) (unsigned char)104)) >= (((/* implicit */int) ((signed char) (unsigned char)101))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */int) (unsigned char)155)) >= (((/* implicit */int) (unsigned char)107))))));
                    var_15 = ((/* implicit */short) (unsigned char)149);
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_19 [i_5 - 4] [i_7] [11ULL] [i_5 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26199)))))) / (((((/* implicit */_Bool) min((((/* implicit */int) (short)-26199)), (arr_21 [i_6])))) ? (((((/* implicit */_Bool) var_3)) ? (-6052947325286375010LL) : (8046496200676838019LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-29))))))))))));
                                var_17 += ((/* implicit */signed char) ((long long int) var_4));
                                var_18 = ((/* implicit */int) (_Bool)0);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) arr_20 [i_5 + 2] [i_5 - 3] [i_5 + 2]);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)168)), (var_8)))) || (((/* implicit */_Bool) arr_19 [i_5] [i_5 - 2] [i_5 - 4] [i_5])))))));
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(2137285778U)))), (var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) 163410198)), (var_0))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        for (unsigned short i_11 = 2; i_11 < 21; i_11 += 1) 
        {
            {
                var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)162), (((/* implicit */unsigned char) arr_28 [i_10] [i_11 + 3]))))) == ((-(1807690966)))));
                var_23 += ((unsigned long long int) ((_Bool) arr_29 [i_11 - 1] [i_11 - 1]));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)34849)) <= (((/* implicit */int) (short)21387))));
            }
        } 
    } 
    var_25 += (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
}
