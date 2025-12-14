/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61464
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)18888)) ? ((~(min((((/* implicit */long long int) (unsigned short)65378)), (9223372036854775795LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32767)) & (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= ((+(((/* implicit */int) (signed char)-106))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 622941573)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))), (2827666080164582127ULL)))));
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212))));
    }
    /* LoopNest 3 */
    for (short i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) -622941574)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((-457909862107461572LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)158)))))))) > (((/* implicit */int) (!(arr_7 [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 3; i_4 < 20; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_2] [i_2] [i_4]))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (short)14306))))) + (((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                    }
                    arr_13 [i_1] [i_2 + 2] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-122)) ? (arr_9 [i_1] [i_2 - 1] [i_3] [(signed char)5]) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) var_13))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(-622941574)))) ? (((var_5) & (130023424LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45745)) && (((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_3] [8LL]))))))));
                        arr_16 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (signed char)97);
                        arr_17 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (~(2477098846040295379LL)));
                    }
                }
            } 
        } 
    } 
}
