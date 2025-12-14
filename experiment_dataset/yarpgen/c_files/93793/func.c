/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93793
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_10 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((/* implicit */int) ((var_3) < (((/* implicit */int) arr_0 [i_0]))))) - (1)))));
        var_11 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) max(((unsigned short)22772), (((/* implicit */unsigned short) (_Bool)1)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            var_12 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
            var_13 = ((/* implicit */long long int) arr_6 [i_1]);
            var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_2])) ? (14244218874092411959ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_6 [i_1]))))))));
        }
        var_15 = ((/* implicit */int) (_Bool)1);
        arr_7 [i_1] [i_1] = min((min(((~(arr_1 [i_1]))), (((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_1] [i_1]))))), (((/* implicit */int) arr_6 [i_1])));
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_16 = min((((/* implicit */int) ((signed char) (~(arr_9 [i_3]))))), ((-(((/* implicit */int) arr_6 [i_3])))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) (_Bool)1)))))))))))));
        var_18 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (564239658723677533ULL))) * (((/* implicit */unsigned long long int) ((arr_4 [i_3]) ^ (arr_4 [i_3]))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) 9223372036854775807LL))), ((+(arr_1 [i_4])))))) ? (((min((((/* implicit */long long int) arr_11 [i_4] [i_4])), (arr_4 [i_4]))) | (((/* implicit */long long int) ((int) arr_1 [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)90)))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 3; i_5 < 17; i_5 += 3) 
        {
            for (int i_6 = 3; i_6 < 15; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        arr_20 [i_4] [i_4] [i_5] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) (~(((var_0) * (((/* implicit */int) (unsigned char)0))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */signed char) (_Bool)1)), (arr_13 [i_4] [i_4] [i_4]))))) ? (min((4161536ULL), (((/* implicit */unsigned long long int) arr_3 [i_5 - 1])))) : (((/* implicit */unsigned long long int) (-((~(arr_5 [i_4] [i_5] [i_6]))))))));
                        var_21 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) / (8353664797875734732ULL))));
                    }
                } 
            } 
        } 
    }
    var_22 -= (~(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (short)24576)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 4) 
    {
        arr_23 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_22 [i_8])), ((((-(((/* implicit */int) arr_22 [i_8])))) * (((((/* implicit */int) arr_22 [i_8])) + (((/* implicit */int) (short)24576))))))));
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    }
}
