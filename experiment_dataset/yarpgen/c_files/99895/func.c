/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99895
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_5)) << ((((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))) + (14007)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65408)) || (((/* implicit */_Bool) (unsigned short)1640))))))))));
                var_18 += ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_1)))))) + (2147483647))) >> (((/* implicit */int) var_14))));
            }
        } 
    } 
    var_19 = ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) < (16368U)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 31428157U)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12)))))) : ((+(1099511595008LL)))));
        var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_4 [i_2])), (16368U))))))))));
        var_22 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((unsigned char) var_15))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 4294950938U))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 18; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)186)))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (min((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_11)))), (arr_15 [(unsigned short)12] [(unsigned short)12] [i_2] [(signed char)12])))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_6))));
                        }
                    }
                } 
            } 
        } 
    }
}
