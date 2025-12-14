/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77441
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-10568)), ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (short)10559)) : ((+(((/* implicit */int) (short)-13471))))));
                    arr_9 [i_0] [i_1] [6LL] [6LL] = (_Bool)1;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 *= ((/* implicit */_Bool) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (1118893047U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1797082837728279348LL)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (short)-10568))))))) >> (((((/* implicit */int) max((max(((short)10565), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (_Bool)1))))) - (10564)))));
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((max((max((656489097U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (short)-10574)))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)10575))) * (1118893045U))))))))));
                                arr_17 [3LL] [i_1] [i_2] [i_3] = (_Bool)1;
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10568))))))) ? (((max(((_Bool)1), ((_Bool)0))) ? (max((-8193471052795016735LL), (((/* implicit */long long int) (unsigned short)17003)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)2))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))) - (max((3108224473U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (8193471052795016737LL) : (((/* implicit */long long int) 3379645422U)))))));
                var_15 = ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)));
                arr_19 [i_0] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */int) (short)10565)) & (((/* implicit */int) (unsigned char)250))))), (((((/* implicit */long long int) 3522121869U)) / (4403595934169546424LL))))), (max(((+(-4745937397696003872LL))), (max((((/* implicit */long long int) (_Bool)1)), (4403595934169546418LL)))))));
                var_16 = ((/* implicit */short) max((((/* implicit */unsigned short) (short)3)), ((unsigned short)51708)));
            }
        } 
    } 
    var_17 &= ((/* implicit */long long int) (unsigned short)13136);
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)13145)) > (((/* implicit */int) (_Bool)1)))))) & (max((3256888302U), (((/* implicit */unsigned int) (unsigned char)123)))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (5536644071274067456LL)))))))))))));
}
