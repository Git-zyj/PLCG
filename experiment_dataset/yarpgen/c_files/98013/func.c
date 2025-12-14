/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98013
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
    var_13 |= (_Bool)0;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)32200)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515)))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42052)) ? (((/* implicit */int) (unsigned short)52249)) : (((/* implicit */int) (unsigned short)52249))))) ? (((/* implicit */int) (signed char)26)) : ((+(-481599841)))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1480727256)) ? ((~(((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (_Bool)0))));
                        }
                        arr_14 [i_0] [i_0] = (!(((/* implicit */_Bool) (~(1329264016)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    arr_20 [i_5] [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)26866)), ((unsigned short)13287)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((1681386557U), (((/* implicit */unsigned int) (unsigned char)249))))))))) : (max((-2111695920518910072LL), (0LL)))));
                    arr_21 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) -481599841))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_5] [i_0] [i_0 + 2] [i_0] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-535701109042657959LL));
                        /* LoopSeq 2 */
                        for (int i_8 = 3; i_8 < 16; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_5] [i_0] [i_7] [i_8 + 2] = ((/* implicit */_Bool) 4634765883708618762LL);
                            arr_30 [i_5] [i_5] [i_5] [i_6] [i_6] [i_5] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)11408))) : (8057950789755172220LL));
                        }
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (3137016440U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1)))));
                            var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_33 [i_0] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (!((_Bool)0)));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) (unsigned char)50);
                            arr_38 [i_11] [i_5] [i_6] [i_6] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)26866)) ? (8080138645753901270LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)84)))));
                        }
                        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            arr_43 [i_0] [i_5] [i_6] [i_5] [i_12] = ((/* implicit */_Bool) (((_Bool)1) ? (6328618935127206776LL) : (-3402120235473958366LL)));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-1)))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) 1815123877U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3297))) : (648210176U))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (_Bool)1))));
                        }
                        for (unsigned short i_13 = 2; i_13 < 15; i_13 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) -530837000))));
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6328618935127206762LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_25 ^= ((/* implicit */_Bool) 31102219);
                    }
                    arr_46 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */long long int) 2637855411U)) : (-2710390704567096565LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1)))))) : (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */unsigned long long int) 2710390704567096564LL)) : (10982346337079304905ULL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_14 = 2; i_14 < 16; i_14 += 1) /* same iter space */
    {
        arr_49 [i_14] [i_14] = 2710390704567096564LL;
        arr_50 [i_14] = ((/* implicit */short) (_Bool)1);
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (short)1)) ? (2438022038U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5269)))));
        arr_51 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1238688052194167718LL)) ? (((/* implicit */int) (signed char)-101)) : (365080830)));
        arr_52 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 4878081360423267647LL)) ? (((/* implicit */int) (short)-17398)) : (-471699441)));
    }
}
