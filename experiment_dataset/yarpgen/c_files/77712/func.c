/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77712
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) ((10LL) % (((/* implicit */long long int) ((/* implicit */int) (short)32758))))));
    var_12 = ((/* implicit */unsigned char) (((_Bool)1) || (var_4)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) -2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))));
                        arr_13 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_2))) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))) ? (((long long int) arr_5 [i_1] [i_1])) : (max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */short) 0ULL);
                    }
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned char)3))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 = ((/* implicit */int) max((((/* implicit */signed char) var_3)), (((signed char) (_Bool)0))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) 
        {
            for (signed char i_6 = 3; i_6 < 21; i_6 += 4) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) arr_24 [(signed char)0] [i_5] [i_5] [i_6 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (((4294967279U) + (134217728U))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) var_6);
                                arr_33 [i_4] [i_4] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_7 + 2])) == (((/* implicit */int) arr_15 [i_7 - 3])))) ? ((~(((/* implicit */int) (short)0)))) : ((~(((/* implicit */int) (signed char)-3))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
