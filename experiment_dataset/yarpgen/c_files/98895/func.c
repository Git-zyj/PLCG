/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98895
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
    var_20 = ((/* implicit */_Bool) ((unsigned int) var_4));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((+(((/* implicit */int) (_Bool)1)))) - (1)))));
        var_21 *= ((/* implicit */unsigned int) (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_5))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) (+(((((((/* implicit */int) var_17)) + (2147483647))) >> (((/* implicit */int) ((_Bool) var_2)))))));
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) -1040018630)))));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((long long int) -2029606667))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_12))))))) : (((((/* implicit */int) (!((_Bool)1)))) % (((/* implicit */int) (unsigned char)127))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [(signed char)15] [i_2 - 2] [10U] [i_3] [i_2] = ((/* implicit */short) var_13);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) max((((499495466) | (((/* implicit */int) (_Bool)0)))), (((int) 1152903912420802560ULL)))))));
                        var_25 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) 9585930879089187858ULL))))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40062)) & (((/* implicit */int) (_Bool)1))))) ? (max((var_8), (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((/* implicit */long long int) (-(1073737728)));
    }
    for (signed char i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        var_26 &= ((/* implicit */unsigned char) max((((unsigned int) var_17)), (((/* implicit */unsigned int) ((int) var_16)))));
        var_27 = (+(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (1290904183))), (((/* implicit */int) var_18)))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)180)))))))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) max((((unsigned short) (signed char)-88)), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1))))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) | (((unsigned int) 8836211983280024124ULL)))) - (2272569908U)))));
                    var_30 &= ((/* implicit */long long int) (~((((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_14)) + (38)))))))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) var_17);
}
