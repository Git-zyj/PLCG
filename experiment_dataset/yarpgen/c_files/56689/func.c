/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56689
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) ((((var_5) & (((/* implicit */unsigned long long int) 2154952972U)))) > ((~(((((/* implicit */unsigned long long int) -7967056570962090251LL)) / (arr_0 [i_0] [i_1])))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        var_13 = min((((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)(-32767 - 1))))))), (((((/* implicit */int) max(((short)-11408), ((short)27939)))) - (((/* implicit */int) arr_4 [i_0] [i_1] [i_3 - 1])))));
                        var_14 = ((/* implicit */unsigned int) ((-5387464538460019707LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) ((int) 68715282432LL));
                        var_16 = ((/* implicit */_Bool) ((short) max((var_11), (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (var_7)))))));
                    }
                    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((var_11), (((/* implicit */long long int) var_4)))) >> (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)250))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_1] [i_1] [i_2] [i_5])))) : (((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_5 - 1] [i_1] [i_0]))))) ^ (((((/* implicit */_Bool) (unsigned char)254)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))))));
                        var_18 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((((-285937362) + (2147483647))) >> (((arr_13 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0]) - (2914272993U)))))))));
                        var_19 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_0)), ((+(14308986053344646043ULL))))) > (((max((((/* implicit */unsigned long long int) (short)2966)), (1865190121435023577ULL))) >> (((((/* implicit */int) (short)-11397)) + (11414)))))));
                    }
                    var_20 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) -1113111390)) : (-3941364456886888514LL));
                }
            } 
        } 
    } 
    var_21 = var_7;
    var_22 = ((/* implicit */short) var_6);
}
