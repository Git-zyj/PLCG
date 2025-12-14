/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94963
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) -2147483645)))) || (((/* implicit */_Bool) -2147483645))));
                            var_20 = ((((unsigned int) 3623036314719385002ULL)) % (((((unsigned int) (_Bool)1)) * (((/* implicit */unsigned int) ((int) 14823707758990166617ULL))))));
                            var_21 = min((((unsigned int) ((unsigned int) (_Bool)0))), (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) 1688223463)) <= (3623036314719385029ULL))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((int) ((3552515538198359244ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                var_23 = ((/* implicit */unsigned int) ((unsigned short) ((14823707758990166587ULL) | (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) ((int) min((((int) 3623036314719384980ULL)), (((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (3552515538198359236ULL))))) / (((long long int) min((14823707758990166614ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))));
                        arr_15 [i_1] [i_1] = ((/* implicit */short) ((((unsigned long long int) (short)23276)) + (((/* implicit */unsigned long long int) min((2342209738U), (((/* implicit */unsigned int) ((signed char) (_Bool)0))))))));
                        var_26 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (0ULL))), (((/* implicit */unsigned long long int) ((unsigned int) -2147483645)))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (14823707758990166634ULL)))) & (((int) ((unsigned int) 14823707758990166613ULL)))));
                        arr_18 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((int) ((signed char) 2296194032U)));
                    }
                }
                for (long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    arr_21 [i_0] [5] [i_1] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned long long int) -6152526897436014865LL)), (0ULL))));
                    var_28 = (((-2147483647 - 1)) - ((-2147483647 - 1)));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */_Bool) -2147483625);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((_Bool) 265746038U));
                                var_31 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)57901));
                                var_32 = ((/* implicit */long long int) ((signed char) (signed char)-75));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            {
                var_33 = ((/* implicit */unsigned long long int) ((-6006681931147916310LL) + (((/* implicit */long long int) ((-2147483645) / (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) (_Bool)1))) + (min((min((((/* implicit */unsigned long long int) (unsigned short)5986)), (14823707758990166634ULL))), (((/* implicit */unsigned long long int) ((signed char) 1878665693)))))));
            }
        } 
    } 
}
