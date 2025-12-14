/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8552
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)180)), ((unsigned short)65535))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-((+(arr_2 [i_0])))))) & (((unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -3862829870961969016LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (-1086496431877859233LL))), (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1086496431877859233LL)) ? (((/* implicit */unsigned long long int) 718485956U)) : (0ULL)))))) : (((arr_2 [i_0]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8191)) ? (3054844526U) : (((/* implicit */unsigned int) var_5)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-8)))) + (2147483647))) << (((((((/* implicit */int) min((var_15), (arr_1 [0])))) + (103))) - (11)))))), (arr_2 [(unsigned short)0])));
        arr_6 [i_1] = ((/* implicit */int) (-((+(min((((/* implicit */long long int) arr_1 [8ULL])), (arr_0 [i_1])))))));
    }
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_15))));
    var_20 -= ((/* implicit */unsigned short) -8630885874013597853LL);
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */signed char) max((arr_8 [i_5 + 3]), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_15 [i_5 + 3] [i_5] [i_5] [i_5 + 3])), (3862829870961969015LL)))), (arr_8 [i_5 + 2])))));
                                var_22 = arr_13 [i_2] [i_2] [i_2];
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_3] [i_3] = ((/* implicit */short) ((max((3862829870961969015LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -3862829870961969016LL))))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))));
                    var_23 -= ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
}
