/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87373
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) (_Bool)1);
                                var_12 = ((/* implicit */unsigned long long int) (~(((min((((/* implicit */long long int) (signed char)-47)), (1518038250723061052LL))) + (8411840790742182835LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_13 ^= ((/* implicit */long long int) (((_Bool)1) ? (1975419838U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)237)))))));
                        var_14 *= ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                    }
                    for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) min(((unsigned char)11), (((/* implicit */unsigned char) (signed char)41))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-((-((+(((/* implicit */int) (unsigned char)3)))))))))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0)))))));
                        var_18 = ((/* implicit */long long int) 0ULL);
                    }
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 0ULL))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)12148))))) ? (var_1) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) (-(var_3)))) : ((+(var_5)))));
}
