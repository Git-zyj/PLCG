/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60020
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) var_0)) : (-7938411634437916730LL)))) ? ((~(4503591037435904LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */long long int) 1383991699U)))))))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
    var_17 -= ((/* implicit */unsigned long long int) (-((-(((((/* implicit */long long int) 1383991706U)) - (var_12)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_1 - 3] [i_2] [i_1 - 3] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((arr_1 [i_0]) >> (((2910975597U) - (2910975544U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1383991692U) >= (1383991727U))))) : (((1403035110U) >> (((1383991718U) - (1383991691U)))))))));
                        var_18 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((3627831642U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))))))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1885675320)))) | (((((/* implicit */_Bool) 0ULL)) ? (1383991702U) : (1383991692U))))))));
                        arr_13 [i_3 + 1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min((min((max((((/* implicit */long long int) var_5)), (arr_2 [i_0]))), (((/* implicit */long long int) ((_Bool) arr_11 [i_0]))))), (((/* implicit */long long int) ((_Bool) arr_5 [i_1 - 2])))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) min((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2628954083U)))))));
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [8ULL]))) ? (max((((/* implicit */unsigned int) (unsigned short)56113)), (2132574805U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_2 [i_0]))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~((~(((/* implicit */int) ((313150361027481678LL) <= (var_13)))))))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (14869355814071322004ULL))))))));
        var_24 = ((/* implicit */unsigned int) arr_15 [i_4] [i_4]);
    }
}
