/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94432
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (unsigned short)65535);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_12);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_2 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (signed char)67))))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)31), (((/* implicit */unsigned char) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)220)) ? (7683962117621695421ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) (_Bool)1)), (36028797017915392LL))))))))));
                                arr_15 [(short)10] [7U] [7U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3]))) > (var_13)));
                                var_17 = ((/* implicit */unsigned short) ((((36028797017915392LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))))) % (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)225), (var_5))))));
                            }
                        } 
                    } 
                    arr_16 [1U] [1U] [(unsigned char)0] [1U] = ((/* implicit */unsigned short) 4294967295U);
                    arr_17 [i_0] [(unsigned char)3] [i_0] [i_0] = arr_8 [i_0] [i_1] [(_Bool)1] [(signed char)1] [i_2];
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2171891091U)))) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) (unsigned char)255)))));
            var_20 = ((4139884525U) / (arr_2 [i_0]));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) min((10638790144400678631ULL), (var_9)));
            var_21 = ((/* implicit */unsigned int) var_10);
        }
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)24)) + (((/* implicit */int) (unsigned char)64))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))), (((7683962117621695421ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178)))))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 232859473843184699LL)), (7683962117621695411ULL)));
                var_24 = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) ((int) 10762781956087856217ULL)))));
            }
        } 
    } 
}
