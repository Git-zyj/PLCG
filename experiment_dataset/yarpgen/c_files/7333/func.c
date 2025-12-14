/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7333
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
    var_20 = ((unsigned int) (_Bool)1);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)-17096)))))))));
        var_22 = ((/* implicit */_Bool) ((arr_0 [i_0]) - (((unsigned int) (unsigned short)9489))));
        var_23 = ((/* implicit */short) min((min((max((3438396132U), (3410511592U))), (((/* implicit */unsigned int) (unsigned char)182)))), (var_16)));
        var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) (((~(var_14))) <= (((8274004U) % (2700610821U)))))), (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-17096)))), (((/* implicit */int) var_2))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)54))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20))))))) : ((+(((/* implicit */int) var_6))))));
        var_26 = ((/* implicit */unsigned char) var_12);
        var_27 &= min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_5))))))), ((+(411560630U))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_28 += 3883406665U;
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_29 = 3772698223U;
                                var_30 = ((/* implicit */_Bool) (-(var_14)));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_3])) / (((/* implicit */int) (unsigned short)34728))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_14)));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (arr_3 [i_2 + 1]) : (1U)));
                }
            } 
        } 
        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    }
    for (short i_7 = 1; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)178))));
        var_36 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17077))) != (2397768979U)))), ((-(4294967295U))))), (((/* implicit */unsigned int) ((632886069U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))))))));
        /* LoopNest 3 */
        for (unsigned int i_8 = 3; i_8 < 21; i_8 += 2) 
        {
            for (unsigned int i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) min((var_37), (((((/* implicit */int) ((unsigned char) ((unsigned char) 1978144176U)))) <= (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)51)) | (((/* implicit */int) arr_1 [(short)12]))))))))));
                        var_38 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 1561899919U)))))) <= ((-(((/* implicit */int) ((var_1) || (((/* implicit */_Bool) var_11)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            {
                var_39 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned int) ((unsigned char) var_19))), (max((0U), (((/* implicit */unsigned int) (unsigned char)178)))))));
                var_40 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_0))));
                var_41 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 4294967290U))))))) < ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12]))) : (3324194349U))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) var_15))));
}
