/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57407
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -4698038528944028666LL))) ? (((((/* implicit */_Bool) 3203724027U)) ? (1369199381) : (((/* implicit */int) (short)17132)))) : (((/* implicit */int) var_2))))) == (max((((/* implicit */long long int) (+(((/* implicit */int) (short)-17146))))), (min((((/* implicit */long long int) (unsigned short)29144)), (6812259984120130884LL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((unsigned int) (unsigned char)178);
        var_14 = ((((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) / (6812259984120130890LL))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) / (3289350573U)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)4007)) ? (3104145072U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21084))))) > (((((/* implicit */unsigned int) 1961766086)) ^ (3104145053U)))));
                        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37959)) ? (((/* implicit */unsigned int) (-(986586286)))) : (min((((/* implicit */unsigned int) (signed char)-110)), (3104145053U)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)245))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -6074093371750392565LL)) ? (3783568391062451031LL) : (-9216141972343742466LL))))));
        arr_14 [i_4] = 3783568391062451031LL;
    }
}
