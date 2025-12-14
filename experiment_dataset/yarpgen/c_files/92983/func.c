/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92983
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
    var_15 = ((/* implicit */int) 638076359411201060LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) (!((_Bool)1)))), (var_0)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_17 &= ((/* implicit */short) var_7);
                    var_18 = ((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_0])));
                    arr_10 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((arr_4 [i_1] [i_0] [i_1]), (arr_4 [i_1] [i_1] [5ULL])))) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) max((((unsigned short) (+(899756792)))), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 17651793972902586478ULL))))) > (((/* implicit */int) (!(((/* implicit */_Bool) -1157542759))))))))));
                }
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((unsigned int) ((arr_8 [i_0] [i_0]) > (arr_3 [i_1] [i_3]))))));
                    arr_15 [i_0] [i_3] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)4))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 15514942123661797857ULL))))), (((((/* implicit */_Bool) (unsigned short)37605)) ? (8929011961300127875LL) : (((/* implicit */long long int) 3982236669U))))))));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                }
                for (int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    arr_21 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)65535)))) ? (var_12) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (signed char)-9)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (-2000159583) : (((/* implicit */int) arr_1 [(_Bool)1]))))))));
                    var_19 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (var_6)))))));
                    arr_22 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65513))) : (var_6))) * (max((((/* implicit */long long int) (unsigned short)0)), (var_0)))));
                }
                var_20 ^= ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) (unsigned short)5)) ? (var_12) : (((/* implicit */int) arr_19 [7U] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)52))))) ? (var_10) : (var_7)))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned long long int) var_5)) << (((var_2) - (597453516)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_13))))))) : (((/* implicit */int) var_14))));
}
