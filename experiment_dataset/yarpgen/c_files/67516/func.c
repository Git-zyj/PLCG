/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67516
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
        arr_4 [0U] = ((/* implicit */short) min((max((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) -2025932401)))), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) (short)3840))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (~((~((~(((/* implicit */int) (signed char)-112)))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_2))));
                            arr_19 [i_1] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) var_1);
                            var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 + 1] [i_3] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_2 + 3] [i_3] [i_4])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_4]))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_2 + 2] [i_4 + 1])) : (var_5))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_16 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4] [i_2 - 3])) | (3309443726U)))) && (((/* implicit */_Bool) arr_15 [i_2 - 3] [i_2 - 3] [i_2 - 1] [i_2 - 1]))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */_Bool) min((min((((/* implicit */int) (signed char)111)), (((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) (short)20614)))))), (((((/* implicit */_Bool) arr_1 [i_2 + 3] [i_2])) ? (((/* implicit */int) (unsigned short)64981)) : (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) var_5)))))))));
        }
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)23))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) % (7243008005698960039LL))) >> (((((/* implicit */int) ((signed char) var_5))) + (77))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_18 = ((signed char) -6LL);
        arr_22 [6U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)19995))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)65535)))) : (max((((/* implicit */long long int) (short)(-32767 - 1))), (var_3))))) + (((/* implicit */long long int) (~(arr_16 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
    }
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((var_5), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((signed char) var_7))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 2) 
    {
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (max((max((((/* implicit */unsigned int) 2147483647)), (arr_25 [8LL]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [7])) | (23)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 + 2])))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned long long int) ((985523569U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))))) : (21ULL)));
    }
}
