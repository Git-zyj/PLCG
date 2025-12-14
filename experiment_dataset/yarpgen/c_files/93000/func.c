/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93000
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)127), ((short)127)))) ? (((/* implicit */int) min(((signed char)-39), ((signed char)39)))) : (((/* implicit */int) min(((unsigned char)244), (((/* implicit */unsigned char) (signed char)39)))))));
                    var_11 = ((/* implicit */signed char) min((max((((/* implicit */int) (short)-127)), (-31328474))), (((/* implicit */int) min(((unsigned char)83), ((unsigned char)208))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((3599940375U), (max((((/* implicit */unsigned int) (unsigned short)0)), (695026920U)))));
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_15 [i_3] [i_5] [i_5] = min((max((15784782657202948203ULL), (((/* implicit */unsigned long long int) (signed char)90)))), (((/* implicit */unsigned long long int) min((81939506U), (((/* implicit */unsigned int) (short)-15282))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((((/* implicit */long long int) 1916703512U)), (max((7092559184161431942LL), (((/* implicit */long long int) (signed char)39))))));
                                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((0U), (((/* implicit */unsigned int) (short)-131)))), (((/* implicit */unsigned int) (unsigned char)56))))) ? (((((/* implicit */_Bool) min((-7092559184161431956LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((1090897304U), (((/* implicit */unsigned int) (unsigned char)208)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)196))))))) : (min((((/* implicit */unsigned int) min(((unsigned char)157), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))), (min((0U), (((/* implicit */unsigned int) -1543087193))))))));
                                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned short) max((min(((_Bool)0), ((_Bool)0))), ((_Bool)1)))), (max((((/* implicit */unsigned short) (signed char)35)), ((unsigned short)0)))));
                                var_17 -= ((/* implicit */unsigned int) (signed char)39);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), ((unsigned char)231)));
                                arr_27 [13LL] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */int) (signed char)-89)), (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)211))))), (0LL)))));
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (short)-13271)) : (((/* implicit */int) (signed char)-39))))), (min((((/* implicit */unsigned long long int) (short)-13630)), (8796566628616049975ULL))))))));
                    var_20 = ((/* implicit */unsigned int) -20LL);
                    var_21 = ((/* implicit */unsigned char) max((var_21), ((unsigned char)235)));
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                {
                    arr_34 [i_3] [i_3] [i_11] = ((/* implicit */int) (signed char)0);
                    var_22 = ((/* implicit */_Bool) (signed char)48);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), (-268435456)));
    var_24 = min((((/* implicit */unsigned int) var_1)), (min((((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (274957193U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)160)))))));
}
