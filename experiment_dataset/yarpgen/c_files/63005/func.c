/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63005
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-((((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)67)))))))) : (((((/* implicit */_Bool) min((3510914087U), (((/* implicit */unsigned int) 1883427596))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 509387803)) != (-1LL))))) : (min((((/* implicit */unsigned int) var_5)), (3510914096U)))))));
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)46019), (((/* implicit */unsigned short) (unsigned char)112)))))))), (min((((/* implicit */unsigned int) (unsigned short)46010)), (min((((/* implicit */unsigned int) -685454557)), (3510914087U)))))));
        var_13 = var_8;
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((min((957647213U), (((/* implicit */unsigned int) var_9)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) | (((((/* implicit */_Bool) -6335566336162698617LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-4509771095792177499LL)))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (3510914087U))), (((/* implicit */unsigned int) max((-685454557), (((/* implicit */int) var_6)))))))) ? ((-(-681156600))) : (((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-651110760525609667LL))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11147))) == (((((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) - (5787410165698501818LL)))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 &= ((/* implicit */unsigned char) var_11);
                        arr_17 [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)255)))) <= (((/* implicit */int) ((unsigned char) 784053207U))))))));
                        arr_18 [i_4] [0LL] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((1609982452U) - (1609982426U)))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((((/* implicit */_Bool) 8372224LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-15495)));
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((1346094192U), (((/* implicit */unsigned int) ((int) (signed char)-31)))))), (((max((((/* implicit */unsigned long long int) (unsigned short)37996)), (7828847415740441244ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) (short)-28396)))))))))));
}
