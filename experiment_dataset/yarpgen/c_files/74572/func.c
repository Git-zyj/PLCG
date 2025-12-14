/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74572
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1] = ((max((14906389762278478399ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) | (((/* implicit */unsigned long long int) min((2342545528U), (((/* implicit */unsigned int) arr_4 [i_2 - 4]))))));
                    var_18 += ((/* implicit */_Bool) max(((~(((/* implicit */int) (!(var_3)))))), (((/* implicit */int) (signed char)-6))));
                    var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) 856916589))))) << (((min((4780663660913628503ULL), (((/* implicit */unsigned long long int) (signed char)-17)))) - (4780663660913628498ULL))))), (((/* implicit */int) (signed char)-86))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)125))))), (602647002U))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) 779935487))));
        var_22 = max((max((max((439411817326198539ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_13))))))), (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_9))));
        var_23 = min(((-(-919867031))), (((/* implicit */int) ((((/* implicit */_Bool) min((154222660U), (2576803405U)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_14))))))));
        var_24 |= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_3] [i_3] [1ULL]), (((/* implicit */int) arr_2 [i_3] [i_3] [i_3])))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) 479453230))));
        arr_16 [i_4] = ((/* implicit */long long int) (+(2499546632U)));
        var_26 = ((/* implicit */unsigned char) (+(max((143974450587500544LL), (((/* implicit */long long int) arr_3 [i_4] [i_4] [i_4]))))));
    }
    for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_27 *= ((/* implicit */_Bool) max((arr_5 [i_6] [i_6] [i_5]), (((/* implicit */unsigned long long int) (+(((arr_3 [i_5] [i_5] [i_6]) ^ (arr_3 [i_5] [8LL] [i_5]))))))));
            var_28 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_21 [i_5 - 1] [i_5 - 1] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 1] [i_5 + 1]))) : (var_6)))), (((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) -6834277950450176073LL))))));
            arr_23 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((arr_3 [(signed char)14] [(signed char)14] [(signed char)14]) | (((/* implicit */int) ((signed char) (((_Bool)0) ? (15203680479134380092ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        }
        arr_24 [i_5] = ((/* implicit */long long int) max((((((/* implicit */int) var_3)) / (var_5))), (((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1]))))));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            {
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
                var_30 |= ((/* implicit */unsigned int) ((((-4577956903518162599LL) + (9223372036854775807LL))) << (((6333114767659748932ULL) - (6333114767659748932ULL)))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 3; i_9 < 16; i_9 += 4) 
                {
                    for (signed char i_10 = 1; i_10 < 16; i_10 += 4) 
                    {
                        {
                            var_31 += min(((+(((((/* implicit */_Bool) 9101375229564234113ULL)) ? (((/* implicit */int) arr_33 [(unsigned char)1] [8U])) : (((/* implicit */int) (signed char)-71)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_21 [(unsigned char)4] [i_8] [(unsigned char)2])))))))));
                            arr_37 [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_33 [i_7] [i_7])), ((-((+(((/* implicit */int) (_Bool)1))))))));
                            arr_38 [i_7] [i_8] = ((/* implicit */signed char) 17179869180ULL);
                            arr_39 [i_7] [i_8] [i_8] [(unsigned char)2] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_21 [i_9] [i_9 - 3] [i_9 + 1])), (var_10)))), (max((var_14), (((/* implicit */unsigned long long int) var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
