/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65551
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 17551422081356915012ULL))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)18)) || (((/* implicit */_Bool) (unsigned short)25590)))) ? (-482085063) : ((+(((/* implicit */int) (unsigned short)36377))))))) && (((/* implicit */_Bool) 5885620457467711710ULL)))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */int) (short)(-32767 - 1))), (-75391350)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (-2144609567)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1642394999)) + (((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (var_5))) + (0U)))));
                            arr_15 [i_0] [14ULL] [i_1] [i_2] [i_3 + 1] [i_3 - 2] = ((/* implicit */unsigned int) (signed char)0);
                            arr_16 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18428)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-32750))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((var_15), ((unsigned char)169)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) > (13608992348493022291ULL)));
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 21; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_30 [i_4] [i_5] [i_6] [i_7] [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18325)) ? (((int) 16113287047864846522ULL)) : (((/* implicit */int) arr_19 [i_5]))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */unsigned long long int) -1552238902)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (arr_28 [i_4] [i_5] [i_5] [i_4] [i_8]) : (((/* implicit */long long int) var_1))))) ? (8579443233515212619ULL) : (((/* implicit */unsigned long long int) 805306368U))))));
                                var_18 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) (unsigned short)37687)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) arr_12 [i_4] [i_5] [i_5] [i_5]);
            }
        } 
    } 
}
