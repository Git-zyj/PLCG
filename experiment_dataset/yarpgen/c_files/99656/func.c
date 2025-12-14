/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99656
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [0LL] |= ((/* implicit */_Bool) 4663839426991253969ULL);
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (arr_4 [8U]) : (((/* implicit */unsigned int) 418583206)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12))))))) / (((unsigned long long int) min((((/* implicit */long long int) (unsigned char)68)), (-1534018132095054584LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4663839426991253969ULL)) ? (2846411151U) : (630567101U)))) ? (((((/* implicit */int) (unsigned short)46119)) - (((/* implicit */int) arr_10 [i_3])))) : (((((/* implicit */int) arr_10 [i_3])) - (((/* implicit */int) arr_10 [i_3])))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [6U] [i_3]), (arr_1 [12]))))) : (min((var_8), (((/* implicit */unsigned int) (unsigned char)76))))))) ? (min(((-(-1))), ((-(((/* implicit */int) var_10)))))) : (((/* implicit */int) ((19) > (((/* implicit */int) min(((unsigned short)36529), (arr_1 [i_3])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (+(4663839426991253970ULL)));
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_23 [i_7] [17LL] [i_6] [i_4] = ((/* implicit */unsigned char) ((int) var_0));
                            var_16 *= ((/* implicit */unsigned short) var_11);
                            arr_24 [i_7] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))))), (6798127099439878377LL)));
                            var_17 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (unsigned short)36529)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-6798127099439878385LL))) + (((/* implicit */long long int) arr_14 [i_5])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29016))) : (8191U)))) && (((/* implicit */_Bool) (~(-1)))))))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */unsigned short) ((signed char) max((arr_14 [i_5]), (((/* implicit */unsigned int) -1)))));
            }
        } 
    } 
    var_19 = var_7;
    var_20 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (signed char)-48)), (-289816428758579071LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (7U)))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29015))) : (11U)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) var_10))))))));
}
