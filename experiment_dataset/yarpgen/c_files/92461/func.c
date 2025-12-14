/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92461
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
    var_17 = ((/* implicit */signed char) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) (_Bool)1);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)65509)) - (65493))))))) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) -1605743018);
                        arr_10 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (signed char)20)))), (((((/* implicit */int) (unsigned short)26)) << (((((/* implicit */int) arr_1 [i_2])) - (34))))))))));
                        var_21 = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)243)) * (((/* implicit */int) (unsigned char)13)))), (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) <= (arr_4 [i_0] [i_0] [i_0])))), (((unsigned short) -2147483626)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) <= (-1LL))) ? (3331173959U) : (((/* implicit */unsigned int) ((int) ((_Bool) arr_11 [i_5]))))));
                    arr_18 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)26)) ? (((long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_14 [i_4] [i_5]))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_0 [i_6])))) << (((((((((/* implicit */_Bool) (unsigned short)13657)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)0)))) + (26))) - (13))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned char) arr_15 [i_4] [i_7])), (arr_0 [i_7]))))) ? (((/* implicit */long long int) ((unsigned int) min(((unsigned short)65509), ((unsigned short)38))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)65531))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65507))) : (-1019183917509936568LL))))))))));
            var_24 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (10U)))) ? (((/* implicit */int) max(((short)28539), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))))));
        }
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (!((_Bool)1))))) && (((((long long int) (_Bool)1)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 5344341346098050417ULL)) ? (3840959895U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_4])))))))))))));
    }
}
