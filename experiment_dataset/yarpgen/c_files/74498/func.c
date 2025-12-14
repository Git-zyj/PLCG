/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74498
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_10 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)12544)), (-3539264496769945407LL)))) || (((/* implicit */_Bool) max((-3539264496769945407LL), (((((/* implicit */_Bool) -3539264496769945418LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-3539264496769945429LL))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)56)), ((short)-27664)));
                    var_11 *= ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (max((arr_0 [i_3] [i_3]), (((/* implicit */unsigned int) (short)-1))))));
        arr_12 [(unsigned short)0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -905880576)) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) -3539264496769945407LL))))) ? (((unsigned int) (unsigned char)210)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)186))))));
        var_12 *= (~(381395230U));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)7154))))))) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) ((unsigned short) (~(3539264496769945407LL)))))));
        arr_13 [(signed char)7] = ((/* implicit */unsigned long long int) (short)1104);
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_7)))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 358876456)) ? (4096420320U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))))))));
}
